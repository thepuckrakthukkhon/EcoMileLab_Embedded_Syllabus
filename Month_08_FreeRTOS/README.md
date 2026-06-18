# 🛠️ คู่มือการเรียนรู้ฝั่ง Embedded: เดือนที่ 8 (สิงหาคม 2026)
## หัวข้อหลัก: การพัฒนาบนระบบปฏิบัติการเวลาจริง (FreeRTOS Multi-Tasking) และ ESP-IDF Framework

ยินดีต้อนรับสู่คู่มือการปฏิบัติงานของเดือนที่ 8 สำหรับทีม Embedded ประจำแล็บ **EcoMileLab** ในเดือนนี้เราจะเปลี่ยนการพัฒนาแบบเขียนโค้ดวนลูปธรรมดา (Super Loop) มาใช้งานระบบปฏิบัติการเวลาจริง (RTOS) บนชิปประมวลผลคู่ **ESP32** ด้วย SDK ทางการของ Espressif (**ESP-IDF**) เพื่อใช้แบ่งเบาระบบออกเป็นงานย่อย และป้องกันไม่ให้กล่องควบคุมของตัวรถหยุดทำงาน (Hang) ระหว่างวิ่งในสนามแข่ง

---

## 📌 ความรู้พื้นฐานที่ต้องมีมาก่อน (Prerequisites)
ก่อนเริ่มเดือนที่ 8 คุณต้องผ่านเกณฑ์ใน **เดือนที่ 7 (กรกฎาคม)** ดังนี้:
1. ติดตั้ง Git และสามารถ Clone/Commit/Push/Merge ตัวโค้ดในกลุ่มแล็บได้สำเร็จ
2. เข้าใจตัวแปรภาษา C, การใช้ Pointer, โครงสร้างข้อมูล (Struct) และการดำเนินการบิต (Bitwise Operations)
3. ทราบกฎความปลอดภัยพื้นฐานของ Shell Eco-Marathon ที่เกี่ยวข้องกับระบบไฟฟ้าและความปลอดภัยทางกายภาพ

---

## 📅 ตารางแผนการศึกษารายสัปดาห์ (Weekly Study Plan)

### 🗓️ สัปดาห์ที่ 1: การเปลี่ยนผ่านจาก Arduino IDE สู่ ESP-IDF v5.x
* **เนื้อหาสำคัญ:**
  * สถาปัตยกรรมภายในชิป ESP32 (Xtensa Dual-Core 32-bit, SRAM, Flash, ROM, Peripherals)
  * โครงสร้างของโปรเจกต์ ESP-IDF (CMake, Main component, Build directory, SDK Configuration Tool (`menuconfig`))
  * ระบบจัดระเบียบ Log ของ ESP32 (ESP_LOGE, ESP_LOGW, ESP_LOGI, ESP_LOGD)
* **เครื่องมือที่ต้องติดตั้ง:**
  * **VS Code** ร่วมกับส่วนขยาย **ESP-IDF Extension**
  * ติดตั้งตัวคอมไพเลอร์และไดรเวอร์พอร์ต USB (CH340/CP210x Drivers)
* **แบบฝึกหัด (Hands-on Lab):**
  * สร้างโปรเจกต์ใหม่จากเทมเพลต `sample_project`
  * คอมไพล์และแฟลชชิป ESP32 จาก Command Line หรือแถบเมนูด้านล่างของ VS Code
  * เขียนโค้ดส่ง Log เพื่อมอนิเตอร์ระดับความสำคัญของข้อมูลข่าวสารระบบ

### 🗓️ สัปดาห์ที่ 2: โครงสร้างการจัดการ Task บน FreeRTOS
* **เนื้อหาสำคัญ:**
  * คอนเซปต์ระบบปฏิบัติการเวลาจริง (Real-Time Operating System - RTOS)
  * โครงสร้างของฟังก์ชันงาน Task Function (ต้องวนลูปถาวรและไม่มีการส่งค่ากลับ)
  * ฟังก์ชันสร้างงาน `xTaskCreate()` และการบังคับระบุคอร์ประมวลผล `xTaskCreatePinnedToCore()`
  * ลอจิกการให้เวลาสลับหน้างาน (Preemptive Scheduling) และการระงับการทำงานชั่วคราวแบบไม่ล็อกระบบด้วย `vTaskDelay()`
* **แบบฝึกหัด (Hands-on Lab):**
  * สร้าง Task A (รันที่ Core 0) เพื่อกะพริบไฟ LED ทุกๆ 500ms
  * สร้าง Task B (รันที่ Core 1) เพื่อพิมพ์ตัวเลขทศนิยมสุ่มออกมาผ่านพอร์ต Serial ทุกๆ 1 วินาที
  * วัดเวลาและตรวจสอบสถานะการทำงานว่า Task ทั้งสองไม่บล็อกเวลาซึ่งกันและกัน

### 🗓️ สัปดาห์ที่ 3: ระบบแลกเปลี่ยนข้อความข้ามงาน (FreeRTOS Queues)
* **เนื้อหาสำคัญ:**
  * การแบ่งประเภทความกังวลของงาน (Separation of Concerns): งานอ่านค่าคันเร่งดึงกำลังมอเตอร์ vs งานสตรีมข้อมูลขึ้นระบบคลาวด์
  * การส่งข้อมูลข้ามพื้นที่หน่วยความจำระหว่าง Task ด้วยคิวส่งข้อมูล (Queues)
  * ฟังก์ชันสร้างคิว `xQueueCreate()` สั่งส่งข้อมูล `xQueueSend()` และรับข้อมูล `xQueueReceive()`
* **แบบฝึกหัด (Hands-on Lab):**
  * พัฒนา `sensor_task` เพื่อจำลองการสแกนอ่านค่าเซนเซอร์ทุกๆ 100ms แล้วนำข้อมูลใส่ลงในคิว
  * พัฒนา `telemetry_task` เพื่อดักรอรับข้อมูลจากคิว แล้วแปลงข้อมูลพิมพ์ออกแสดงผลเมื่อมีข้อมูลใหม่เข้ามาในคิว

### 🗓️ สัปดาห์ที่ 4: การสลับการเข้าใช้หน่วยความจำ (Mutex & Semaphore)
* **เนื้อหาสำคัญ:**
  * ปัญหาวงจรรวนเนื่องจากมีหน้างานพยายามเข้าใช้พอร์ตเดียวกันพร้อมกัน (Race Conditions)
  * การจองสิทธิ์การเขียนพอร์ตและการสื่อสารด้วยเซมาฟอร์แบบไบนารี (Binary Semaphore) และ มิวเท็กซ์ (Mutex)
  * การใช้คำสั่งสลับการล็อกหน่วยความจำ `xSemaphoreCreateMutex()`, `xSemaphoreTake()`, `xSemaphoreGive()`
* **แบบฝึกหัด (Hands-on Lab):**
  * สร้างโปรแกรมที่ทั้งสอง Task ต้องการเขียนพิมพ์ข้อความผ่านสายพอร์ต Serial (UART0) เดียวกันพร้อมกัน
  * ใช้ Mutex ล็อกสิทธิ์การใช้พอร์ต Serial จนพิมพ์ข้อความเสร็จสิ้น เพื่อป้องกันข้อความขยะ/ซ้อนทับกัน

---

## 🏎️ การนำไปประยุกต์ใช้ออกแบบตัวรถแข่ง (Shell Eco-Marathon Application)
ในการแข่งขันจริง **ความปลอดภัยของระบบไฟฟ้าคือกฎเหล็กสูงสุด** ทางผู้จัดการแข่งขันต้องการระบบที่มั่นคงและมีการป้องกันความเสียหายเมื่อเกิดเหตุวิกฤต (Fail-safe)
เราจึงใช้ FreeRTOS ในการแยกการประมวลผล VCU ออกเป็นคอร์ย่อยดังนี้:
* **Core 0 (งานเสริม):** มอบหมายให้ทำหน้าที่ประมวลผลระบบสตรีมข้อมูลส่ง Telemetry ข้าม LoRa ซึ่งเป็นพอร์ตทำงานที่ใช้เวลาส่งค่อนข้างช้า หากเครือข่ายหลุด ขาคอร์ที่ 0 จะไม่ฉุดรั้งให้การบังคับรถค้างตามไปด้วย
* **Core 1 (งานระบบควบคุมและความปลอดภัย):** มอบหมายให้อ่านค่าเซนเซอร์คันเร่ง คำนวณส่งค่า PWM ไปคุมความเร็วมอเตอร์ และคอยตรวจดูสถานะปุ่ม E-Stop วงจร BMS ข้อมูลปุ่มกดต้องได้รับการประมวลผลและตัดสินใจได้ทันทีไม่มีการดีเลย์

---

## 💻 ตัวอย่างโปรแกรมการทดสอบระบบ (Template Code)
ด้านล่างนี้คือตัวอย่างแนวทางการขึ้นโครงโค้ดภาษา C ด้วย ESP-IDF สำหรับงาน Multi-Tasking บน ESP32:

```c
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "esp_log.h"

static const char *TAG = "EcoMileLab_VCU";
#define BLINK_GPIO 2

// โครงสร้างข้อมูลสำหรับส่งผ่านคิวข้อความ
typedef struct {
    float voltage;
    float current;
    uint32_t timestamp;
} sensor_data_t;

QueueHandle_t sensor_queue;

// Task 1 (รันที่ Core 1): คอยจำลองการประมวลผลควบคุมรถและอ่านค่าจากพอร์ต
void sensor_task(void *pvParameters) {
    sensor_data_t data;
    data.timestamp = 0;
    
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
    
    while(1) {
        // จำลองการอ่านค่าแรงดันและกระแส
        data.voltage = 48.2f; // ค่าจำลอง 48.2 Volts
        data.current = 10.5f; // ค่าจำลอง 10.5 Amps
        data.timestamp++;
        
        // กะพริบไฟ LED บนบอร์ดแสดงสถานะการกะพริบทำงานปกติ
        static bool state = false;
        gpio_set_level(BLINK_GPIO, state);
        state = !state;
        
        // ส่งโครงสร้างข้อมูลเข้าไปยังคิว (หน่วงเวลาสูงสุด 10 Tick หากคิวเต็ม)
        if (xQueueSend(sensor_queue, &data, 10 / portTICK_PERIOD_MS) == pdPASS) {
            ESP_LOGD(TAG, "ข้อมูลเซนเซอร์ถูกส่งไปยังคิวเรียบร้อย");
        }
        
        // หลีกเลี่ยงลูปดักล็อกด้วยการใช้ vTaskDelay (หน่วง 200 มิลลิวินาที)
        vTaskDelay(pdMS_TO_TICKS(200));
    }
}

// Task 2 (รันที่ Core 0): ประมวลผลระบบสตรีมข้อมูลส่งผ่านพอร์ตความเร็วต่ำ
void telemetry_task(void *pvParameters) {
    sensor_data_t received_data;
    
    while(1) {
        // รอคอยอ่านค่าข้อมูลจากคิว (จะรอบล็อกอยู่ตรงนี้จนกว่าคิวจะมีข้อมูลส่งเข้ามา)
        if (xQueueReceive(sensor_queue, &received_data, portMAX_DELAY) == pdPASS) {
            ESP_LOGI(TAG, "ข้อมูลสตรีม Telemetry -> เวลา: %ld | โวลต์: %.1f V | กระแส: %.1f A", 
                     received_data.timestamp, received_data.voltage, received_data.current);
        }
    }
}

void app_main(void) {
    ESP_LOGI(TAG, "กำลังเริ่มต้นระบบหลักกล่อง VCU...");
    
    // สร้างคิวข้อความ สามารถเก็บข้อมูลโครงสร้างย่อยได้สูงสุด 10 ข้อมูล
    sensor_queue = xQueueCreate(10, sizeof(sensor_data_t));
    
    if (sensor_queue != NULL) {
        // สร้าง Task ย่อยระบุตำแหน่งคอร์ควบคุมระบบหลัก
        xTaskCreatePinnedToCore(sensor_task, "sensor_task", 4096, NULL, 5, NULL, 1);
        xTaskCreatePinnedToCore(telemetry_task, "telemetry_task", 4096, NULL, 4, NULL, 0);
    } else {
        ESP_LOGE(TAG, "เกิดข้อผิดพลาดในการติดตั้งสร้างคิวแลกเปลี่ยนข้อมูล!");
    }
}
```

---

## ✅ เกณฑ์ประเมินการผ่านสิทธิ์ความรู้ในเดือนที่ 8
1. สามารถติดตั้งโปรแกรมคอมไพล์โค้ดโครงการ `sample_project` บนเครื่องของตัวเองสำเร็จโดยไม่มี Error
2. อธิบายความแตกต่างและหน้าที่สำคัญของ `vTaskDelay()` และสวิตช์ขัดจังหวะการหน่วงเวลาแบบทั่วไปได้ถูกต้อง
3. รันโปรเจกต์ตัวอย่างและจำลองสถานการณ์ Task ค้าง โดยยืนยันว่าโปรแกรมอีก Core ยังคงรันและทำงานได้ต่อเนื่องไม่มีปัญหา
