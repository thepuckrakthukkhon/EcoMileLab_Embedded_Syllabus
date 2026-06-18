# 📚 Month_09_Protocols: เซนเซอร์วัดค่าความปลอดภัย (ADC, Interrupt) และจูนบอร์ดควบคุม VESC FOC
> การเขียนไดรเวอร์คันเร่งคู่ (ADC) พร้อมระบบกรอง Failsafe และการเขียนคำนวณเวกเตอร์ขับมอเตอร์ FOC (Clarke/Park Transform) ร่วมกับบอร์ด VESC Inverter

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [SimpleFOC Documentation](https://docs.simplefoc.com/) - เรียนรู้อัลกอริทึม FOC ควบคุมแรงบิดมอเตอร์
- [ESP-IDF GPIO Interrupt API Reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/gpio.html)
- [VESC Tool Manual](https://vesc-project.com/)

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- ดูตัวอย่างไดรเวอร์ I2C อ่านเซนเซอร์: `Month_09_Protocols/i2c_ina226_demo/ina226_driver.c`
- ดูตัวอย่างสร้าง Payload ข้อมูล: `Month_09_Protocols/cjson_demo/cjson_helper.c`

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`FOC Park Clarke transform`, `VESC UART CAN configuration`, `Throttle dual ADC failsafe C`, `GPIO hardware interrupt speed sensor`

---
*EcoMileLab Embedded & Electrical Team*
