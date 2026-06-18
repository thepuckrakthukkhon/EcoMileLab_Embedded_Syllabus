# 📚 Month_13_Harness_and_EMI: ระบบกรองสัญญาณรบกวนในซอฟต์แวร์ (Software Noise Filtering) & Bus Recovery
> การพัฒนาฟังก์ชันการกรองข้อมูลเซนเซอร์ผ่านโค้ด (เช่น ข้อมูลคันเร่งคู่ ADC) และตรรกะกู้คืนระบบบัสสื่อสาร I2C/CAN เมื่อเกิดคลื่นแม่เหล็กไฟฟ้ากวน (EMI) จนบัสล็อกค้าง

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [Low-Pass Filter Algorithm in C](https://www.embeddedrelated.com/showarticle/819.php) - เรียนรู้วิธีเขียนซอฟต์แวร์ฟิลเตอร์ทางคณิตศาสตร์อย่างง่าย
- [ESP-IDF I2C Recovery API](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/i2c.html#i2c-bus-recovery)

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- ดูฟังก์ชันอ่านเซนเซอร์แม่เหล็กผ่านบัสและการตรวจจับบัสค้าง: `Month_13_Harness_and_EMI/as5600_demo/as5600_reader.c`
- เขียนฟังก์ชัน Exponential Moving Average (EMA) เพื่อกรองสัญญาณ ADC ที่แกว่งจาก EMI

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`Exponential moving average filter C`, `I2C bus recovery ESP32`, `CAN bus error active recovery`, `Software debouncing analog signals`

---
*EcoMileLab Embedded & Electrical Team*
