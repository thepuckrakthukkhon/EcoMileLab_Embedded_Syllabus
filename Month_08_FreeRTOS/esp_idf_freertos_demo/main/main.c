#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "esp_log.h"

static const char *TAG = "EcoMileLab_Demo";

typedef struct {
    float cell_voltages[4];
    float total_current;
} bms_packet_t;

QueueHandle_t bms_data_queue;

void monitor_task(void *pvParameters) {
    bms_packet_t packet;
    while (1) {
        // จำลองการอ่านค่าแรงดันกระแสเซลล์แบต
        packet.cell_voltages[0] = 3.2f;
        packet.cell_voltages[1] = 3.25f;
        packet.cell_voltages[2] = 3.18f;
        packet.cell_voltages[3] = 3.22f;
        packet.total_current = 8.5f;

        xQueueSend(bms_data_queue, &packet, pdMS_TO_TICKS(10));
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}

void processing_task(void *pvParameters) {
    bms_packet_t rcv_packet;
    while (1) {
        if (xQueueReceive(bms_data_queue, &rcv_packet, portMAX_DELAY) == pdPASS) {
            float total_v = rcv_packet.cell_voltages[0] + rcv_packet.cell_voltages[1] + 
                            rcv_packet.cell_voltages[2] + rcv_packet.cell_voltages[3];
            ESP_LOGI(TAG, "BMS Data -> Total V: %.2fV, Current: %.1fA", total_v, rcv_packet.total_current);
        }
    }
}

void app_main(void) {
    bms_data_queue = xQueueCreate(5, sizeof(bms_packet_t));
    if (bms_data_queue != NULL) {
        xTaskCreatePinnedToCore(monitor_task, "BMS_Monitor", 2048, NULL, 5, NULL, 1);
        xTaskCreatePinnedToCore(processing_task, "BMS_Process", 2048, NULL, 4, NULL, 0);
    }
}
