# 📚 Month_17_Reliability_Rollback: ระบบกู้คืนเฟิร์มแวร์สำรองและการใช้งาน NVS Flash Storage
> การเก็บข้อมูลพารามิเตอร์แบบไม่สูญหาย และการซ้อมสับเปลี่ยนกล่องกู้ชีพในเวลาจำกัด

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [ESP-IDF Non-Volatile Storage (NVS) API](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/storage/nvs_flash.html) - วิธีกดเขียนพารามิเตอร์ถาวรลง Flash
- [esptool.py Documentation](https://docs.espressif.com/projects/esptool/en/latest/esp32/index.html) - คำสั่งดึงแฟลชข้อมูลผ่านคอมพิวเตอร์
- [ESP32 Partition Table Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/partition-tables.html) - การแบ่งพาร์ติชันสำหรับโปรแกรมหลักและตัวกู้ชีพ

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- คำสั่งแฟลชอย่างรวดเร็วผ่าน Terminal: `esptool.py --port COMx --baud 921600 write_flash 0x10000 build/release_v1.bin`

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`ESP-IDF NVS flash get set`, `esptool write flash commands`, `ESP32 OTA rollback factory partition`, `Hot swap VCU connector guide`

---
*EcoMileLab Embedded & Electrical Team*
