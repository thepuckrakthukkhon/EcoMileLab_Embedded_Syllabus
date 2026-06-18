# 📚 Month_09_Protocols: โปรโตคอลการสื่อสารข้อมูลฮาร์ดแวร์ (I2C, UART, SPI, cJSON)
> วิธีการคุยแลกเปลี่ยนข้อมูลกับเซนเซอร์ไอซีวัดกำลังไฟฟ้า และวิธีแพ็กเกจข้อมูลส่งขึ้นระบบคลาวด์ Telemetry

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [TI INA226 Datasheet](https://www.ti.com/product/INA226) - ค้นหาแผนผังรีจิสเตอร์ในการอ่านโวลต์กระแส
- [ESP-IDF I2C Master Driver Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/i2c.html) - ฟังก์ชันเขียนอ่านอุปกรณ์ I2C
- [cJSON GitHub Repository](https://github.com/DaveGamble/cJSON) - โค้ดไลบรารีสร้างและ Parse ข้อความ JSON ในภาษา C

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- โค้ดเปิดบัสและอ่านรีจิสเตอร์ INA226: `Month_09_Protocols/i2c_ina226_demo/ina226_driver.c`
- โค้ดแพ็กข้อมูลเซนเซอร์: `Month_09_Protocols/cjson_demo/cjson_helper.c`

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`I2C master write read ESP32`, `INA226 register configuration`, `cJSON serialization memory leak C`, `UART driver install ESP-IDF`

---
*EcoMileLab Embedded & Electrical Team*
