# 🏎️ EcoMileLab Embedded Team Syllabus
> คลังรวบรวมข้อมูลการเรียนรู้วิศวกรรมสมองกลฝังตัว (Embedded Software & VCU Firmware) สำหรับการออกแบบและพัฒนารถประหยัดพลังงาน Shell Eco-Marathon ตั้งแต่ 0 ถึง 100%

คลังเก็บข้อมูลนี้สร้างขึ้นและดูแลโดยทีม **Embedded** เพื่อเป็นแนวทางการศึกษาค้นคว้าและการพัฒนาซอฟต์แวร์ระบบควบคุม VCU (Vehicle Control Unit) ตลอดระยะเวลารวม 25 เดือน

---

## 🗺️ แผนการศึกษารายเดือนของทีม Embedded (Monthly Syllabus Index)

| เดือน | หัวข้อการเรียนรู้หลัก | รายละเอียดเนื้อหาสำหรับฝั่ง Embedded |
| :---: | :--- | :--- |
| **Month 07** | [Month_07_Foundation_and_PCB](./Month_07_Foundation_and_PCB) | ปูพื้นฐาน Git, ภาษา C และออกแบบแผงวงจร PCB VCU (LV) ใน KiCad |
| **Month 08** | [Month_08_FreeRTOS](./Month_08_FreeRTOS) | การเขียนโปรแกรมด้วยเฟรมเวิร์ก ESP-IDF และ FreeRTOS บนบอร์ด PCB จริง |
| **Month 09** | [Month_09_Sensors_and_FOC](./Month_09_Sensors_and_FOC) | ไดรเวอร์คันเร่ง ADC, สัญญาณความเร็วล้อ และเขียนโค้ดคุมมอเตอร์ VESC FOC |
| **Month 10** | [Month_10_LoRa_and_Telemetry](./Month_10_LoRa_and_Telemetry) | การเขียนไดรเวอร์ LoRa (SPI) และบีบอัดข้อมูลแบบโครงสร้าง Byte Array |
| **Month 11** | [Month_11_Precharge_and_Contactor](./Month_11_Precharge_and_Contactor) | ตรรกะควบคุมการหน่วงเวลาเปิดปิดตัวทริกรีเลย์ Pre-charge และ Contactor |
| **Month 12** | [Month_12_FSM_and_HIL_Simulation](./Month_12_FSM_and_HIL_Simulation) | ตรรกะระบบ VCU State Machine (FSM) และการดักสัญญาณความปลอดภัย ISR |
| **Month 13** | [Month_13_Harness_and_EMI](./Month_13_Harness_and_EMI) | การเขียนโปรแกรมกรองสัญญาณรบกวน (Software Filter) และระบบ Bus Recovery |
| **Month 14** | [Month_14_Tech_Docs_and_Mock_Scrutineering](./Month_14_Tech_Docs_and_Mock_Scrutineering) | จัดเตรียมผังการทำงานของซอฟต์แวร์ VCU (Software Flowcharts) ภาษาอังกฤษ |
| **Month 15** | [Month_15_First_Drive_and_Safe_Mode](./Month_15_First_Drive_and_Safe_Mode) | โหมดจำกัดกำลัง Conservative รันรถวิ่งครั้งแรก และระบบกู้ภัยบอร์ด VCU สำรอง |
| **Month 16** | [Month_16_Log_Data_Analysis](./Month_16_Log_Data_Analysis) | ระบบส่งข้อมูลดีบักผ่าน Serial พอร์ต (Embedded Diagnostic Console CLI) |
| **Month 17** | [Month_17_Thermal_and_Coasting](./Month_17_Thermal_and_Coasting) | ซอฟต์แวร์ระบบจำกัดกำลัง Thermal Derating และโหมด Coasting ปล่อยไหลเสรี |
| **Month 18** | [Month_18_Long_Run_Reliability](./Month_18_Long_Run_Reliability) | การดีบั๊กทดสอบหน่วยความจำระบบค้างและตั้งระบบฮาร์ดแวร์ Watchdog (WDT) |
| **Month 19** | [Month_19_Git_Release_and_Checksum](./Month_19_Git_Release_and_Checksum) | การสร้าง Git Tag (Release v1.0) และการตรวจผลรวมไฟล์ Checksum SHA-256 |
| **Month 20** | [Month_20_Tech_Doc_Approval](./Month_20_Tech_Doc_Approval) | จัดทำแผนผัง VCU Pinout Mapping และคำอธิบายวงจรระดับสัญญาณควบคุม |
| **Month 21-25** | [Month_21_25_Race_Preparation](./Month_21_25_Race_Preparation) | ล็อกเฟิร์มแวร์ VCU ถาวร แฟลชกล่องกู้ชีพสำรอง 3 ชุด และสนับสนุนหน้าลู่แข่ง |

---

## 🛠️ ขั้นตอนสำหรับการเริ่มต้นสำหรับผู้เรียนใหม่ (How to Start)
1. **ติดตั้งโปรแกรมเตรียมพร้อม:**
   - ติดตั้ง [Git For Windows](https://git-scm.com/) ลงเครื่องคอมพิวเตอร์ของคุณ
   - ติดตั้งตัวเขียนโปรแกรม [VS Code Editor](https://code.visualstudio.com/)
2. **ดาวน์โหลดเอกสารคู่มือแผนรายเดือน:**
   - ตรวจดูหัวข้อและเกณฑ์ประเมินแบบละเอียดได้ในไฟล์ [EcoMileLab_Embedded_Learning_Guide.xlsx](../EcoMileLab_Embedded_Learning_Guide.xlsx)
3. **ทำการ Clone คลังเก็บข้อมูลนี้เพื่อนำไปทำแบบฝึกหัด:**
   ```bash
   git clone <ลิ้งก์ของ GitHub Repo นี้เมื่อคุณสร้างเสร็จ>
   ```

---
*EcoMileLab — Embedded Engineering for a Greener Tomorrow*
