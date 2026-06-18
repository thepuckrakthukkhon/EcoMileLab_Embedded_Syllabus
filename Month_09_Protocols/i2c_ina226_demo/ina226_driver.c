#include <stdio.h>
#include "driver/i2c.h"
#include "esp_log.h"

#define I2C_MASTER_SCL_IO           22      /*!< GPIO number for I2C master clock */
#define I2C_MASTER_SDA_IO           21      /*!< GPIO number for I2C master data  */
#define I2C_MASTER_NUM              I2C_NUM_0 /*!< I2C port number */
#define INA226_ADDR                 0x40    /*!< INA226 I2C address */

#define INA226_REG_SHUNTVOLTAGE     0x01
#define INA226_REG_BUSVOLTAGE       0x02

esp_err_t INA226_ReadRegister(uint8_t reg_addr, uint16_t *data) {
    uint8_t write_buf[1] = { reg_addr };
    uint8_t read_buf[2] = { 0 };
    
    // ยิงคำสั่งเขียนเพื่อแจ้งตำแหน่งรีจิสเตอร์ และอ่านผลลัพธ์กลับมา 2 ไบต์
    esp_err_t err = i2c_master_write_read_device(I2C_MASTER_NUM, INA226_ADDR, 
                                                 write_buf, 1, 
                                                 read_buf, 2, 
                                                 pdMS_TO_TICKS(100));
    if (err == ESP_OK) {
        *data = (read_buf[0] << 8) | read_buf[1];
    }
    return err;
}
