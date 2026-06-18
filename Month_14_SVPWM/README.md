# 📚 Month_14_SVPWM: สัญญาณ PWM และการขับเคลื่อนมอเตอร์แบบ Six-step/SVPWM
> การสร้างคลื่น PWM 3 เฟสขับมอเตอร์ และวิธีการสับขั้วไฟฟ้าควบคุมรอบมอเตอร์เบื้องต้น

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [ESP32 MCPWM Driver API Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/mcpwm.html) - ไดรเวอร์คุม PWM มอเตอร์ของชิป ESP32
- [Space Vector PWM (SVPWM) Tutorial](https://www.mathworks.com/help/mcb/ref/spacevectorgenerator.html) - บทความอธิบายหลักการ SVPWM จาก MathWorks
- [BLDC Six-step Commutation Explained (YouTube)](https://www.youtube.com/watch?v=UqWwH3vC25g) - แอนิเมชันแสดงขั้นตอนสลับขดลวดขับมอเตอร์

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- การควบคุมระดับต่ำจะใช้ MCPWM peripheral ของ ESP32 ซึ่งมีพินควบคุม 6 ขาต่อเชื่อมคู่เกตไดรเวอร์โดยตรง

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`ESP32 MCPWM generator config`, `Six-step commutation logic BLDC`, `Space Vector PWM duty cycle`, `Dead time insertion gate driver`

---
*EcoMileLab Embedded & Electrical Team*
