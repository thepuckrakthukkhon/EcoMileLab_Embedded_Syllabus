# 📚 Month_13_Angle_Sensor: การดึงค่าองศาและความเร็วรอบมอเตอร์ผ่าน AS5600 Sensor
> การต่อเชื่อมบัส I2C ดึงมุมแกนมอเตอร์แบบไร้สัมผัสเพื่อหาพารามิเตอร์ RPM

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [AMS AS5600 Official Datasheet](https://ams.com/as5600) - คอนฟิกรีจิสเตอร์มุม 12-bit แบบละเอียด
- [How Magnetic Encoders Work (YouTube)](https://www.youtube.com/watch?v=kY31R9gGz5k) - วิดีโออธิบายเทคโนโลยี Hall Effect และ Diametric Magnet
- [ESP-IDF I2C Device Read/Write API](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/i2c.html)

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- ดูตัวอย่างโค้ดอ่านมุมองศาดิบและแปลงเป็นองศาวิศวกรรม: `Month_13_Angle_Sensor/as5600_demo/as5600_reader.c`

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`AS5600 raw angle register`, `Diametric magnet orientation AS5600`, `I2C read byte array ESP32`, `Calculate RPM from angle change`

---
*EcoMileLab Embedded & Electrical Team*
