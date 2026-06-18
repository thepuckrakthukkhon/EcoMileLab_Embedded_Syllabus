# 📚 Month_12_FSM_and_HIL_Simulation: ตรรกะ VCU Finite State Machine (FSM) และการขัดจังหวะความปลอดภัย (Interrupt ISR)
> การเขียนลอจิก State Machine คุมสถานะเปิดปิดรถยนต์ไฟฟ้า และการติดตั้งระบบขัดจังหวะ GPIO Interrupt (ISR) เพื่อตรวจจับอินพุต E-Stop/Dead-man Switch ทันที

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [Finite State Machine C Code Patterns](https://barrgroup.com/embedded-systems/how-to/state-machines-c)
- [ESP-IDF GPIO Interrupt Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/gpio.html#gpio-interrupts)

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- โค้ดต้นแบบระบบควบคุมรถยนต์: `Month_12_FSM_and_HIL_Simulation/vcu_state_machine/vcu_fsm.c`
- ตรวจสอบการทำงานของ GPIO ISR Handler เมื่อปุ่มโดนกดเพื่อสั่งตัดสัญญาณมอเตอร์

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`VCU FSM transitions`, `GPIO ISR handler ESP32`, `Dead-man switch safety check C`, `Precharge logic state`

---
*EcoMileLab Embedded Team*
