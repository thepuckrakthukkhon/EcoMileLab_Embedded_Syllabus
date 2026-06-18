# 📚 Month_11_Precharge_and_Contactor: ตรรกะซอฟต์แวร์ควบคุมระบบขับรีเลย์ Contactor & Pre-charge
> การเขียนโปรแกรมฝั่ง Embedded เพื่อควบคุมลำดับการเปิดใช้งานวงจรขับรีเลย์ Pre-charge และ Contactor กำลังสูงอย่างถูกต้อง เพื่อป้องกันไม่ให้บอร์ดรีเซ็ตจากไฟตกชั่วขณะ และวิเคราะห์ตรรกะความล่าช้าในโค้ด

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [ESP-IDF GPIO API Reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/gpio.html)
- [Electric Vehicle VCU Startup Sequence logic](https://www.sciencedirect.com/topics/engineering/vehicle-control-unit)

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- ตรวจสอบการต่อพินควบคุม GPIO ของ ESP32 ไปยังวงจรขับกำลัง (Gate driver / Optocoupler relay)
- ดูตัวอย่างตรรกะควบคุมลำดับขั้นตอนการหน่วงเวลาเปิดปิด (Sequencing delays) ใน State Machine: `Month_12_FSM_and_HIL_Simulation/vcu_state_machine/vcu_fsm.c`

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`VCU startup sequence programming`, `GPIO state control ESP-IDF`, `Anti-chatter software debounce relays`, `Power-on sequencing logic`

---
*EcoMileLab Embedded & Electrical Team*
