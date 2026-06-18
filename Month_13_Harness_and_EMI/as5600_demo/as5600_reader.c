#include <stdint.h>
#include "driver/i2c.h"

#define AS5600_ADDR             0x36
#define AS5600_REG_RAW_ANGLE    0x0C

// อ่านค่ามุมดิบขนาด 12-bit (0 ถึง 4095) จากเซ็นเซอร์
uint16_t AS5600_ReadRawAngle() {
    uint8_t write_buf[1] = { AS5600_REG_RAW_ANGLE };
    uint8_t read_buf[2] = { 0 };
    uint16_t angle = 0;
    
    esp_err_t err = i2c_master_write_read_device(I2C_NUM_0, AS5600_ADDR, 
                                                 write_buf, 1, 
                                                 read_buf, 2, 
                                                 pdMS_TO_TICKS(50));
    if (err == ESP_OK) {
        angle = (read_buf[0] << 8) | read_buf[1];
    }
    return angle; // 12-bit Value
}

float convert_to_degree(uint16_t raw_angle) {
    return (float)raw_angle * 360.0f / 4096.0f;
}
