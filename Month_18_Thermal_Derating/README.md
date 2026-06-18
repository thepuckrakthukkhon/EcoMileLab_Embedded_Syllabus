# 📚 Month_18_Thermal_Derating: การทดสอบวิ่งระยะยาวสะสมชั่วโมง (Long Run Reliability Drill)
> การป้อนสภาวะความเค้นทางระบบและเช็คอาการเอ่อล้นของแรม (Memory Leak) เพื่อการันตีบอร์ดรันได้ยาวนานเสถียรไม่มีอาการรีเซ็ต

---

## 📖 ข้อมูลและแหล่งเรียนรู้เพิ่มเติม (Resources for Further Study)
เพื่อให้เข้าใจเชิงลึกและเห็นภาพการทำงานของระบบ แนะนำให้เข้าไปศึกษาที่ลิงก์และบทความต่อไปนี้ครับ:
- [ESP-IDF Heap Memory Information API](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/mem_alloc.html)

---

## 💻 ตัวอย่างซอร์สโค้ดและตัวอย่างในโปรเจกต์ (Source Code & References)
- เรียกเช็คหน่วยความจำในลูปดีบั๊กเพื่อตรวจสอบว่า RAM ไม่ลดลงเมื่อทำงานไปนานๆ: `heap_caps_get_free_size(MALLOC_CAP_8BIT)`

---

## 🔍 คำสำคัญสำหรับไปศึกษาค้นหาข้อมูลต่อ (Search Keywords)
หากต้องการหาคลิปวิดีโออธิบายหรือเปเปอร์วิชาการมาศึกษาเพิ่มเติม สามารถใช้คำค้นหาเหล่านี้ใน Google / YouTube / IEEE Xplore:
`ESP32 memory leak inspection`, `VCU long run testing 4 hours`, `Heap memory allocator ESP-IDF`

---
*EcoMileLab Embedded & Electrical Team*
