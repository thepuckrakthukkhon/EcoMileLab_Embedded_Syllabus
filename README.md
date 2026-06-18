# 🏎️ EcoMileLab Embedded & Electrical Syllabus
> คลังรวบรวมข้อมูลการเรียนรู้วิศวกรรมสมองกลฝังตัวและระบบไฟฟ้ารถยนต์ประหยัดพลังงาน (Shell Eco-Marathon) ตั้งแต่เริ่มต้นจาก 0 สู่ระดับพร้อมลงแข่ง 100%

คลังเก็บข้อมูลแห่งนี้สร้างขึ้นมาเพื่อให้ทีมงานฝ่ายไฟฟ้าและซอฟต์แวร์ของ **EcoMileLab** สามารถศึกษาและร่วมพัฒนาซอฟต์แวร์ควบคุมรถยนต์พลังงานไฟฟ้า VCU (Vehicle Control Unit) ตลอดกระบวนการออกแบบ 25 เดือน โดยได้รับการปรับปรุงสอดคล้องตาม Roadmap ล่าสุดเรียบร้อยแล้ว

---

## 🗺️ แผนการศึกษารายเดือน (Monthly Roadmap Index)

| เดือน | หัวข้อการเรียนรู้หลัก | รายละเอียดเนื้อหา |
| :---: | :--- | :--- |
| **Month 07** | [Month_07_Foundation_and_PCB](./Month_07_Foundation_and_PCB) | ปูพื้นฐาน Git, ภาษา C และออกแบบแผงวงจร PCB VCU (LV) ใน KiCad |
| **Month 08** | [Month_08_FreeRTOS](./Month_08_FreeRTOS) | การเขียนโปรแกรมด้วยเฟรมเวิร์ก ESP-IDF และ FreeRTOS บนบอร์ด PCB จริง |
| **Month 09** | [Month_09_Sensors_and_FOC](./Month_09_Sensors_and_FOC) | ไดรเวอร์คันเร่งคู่ Failsafe (ADC) สัญญาณรอบล้อ และการขับมอเตอร์ FOC / VESC |
| **Month 10** | [Month_10_LoRa_and_Telemetry](./Month_10_LoRa_and_Telemetry) | การบีบอัดข้อมูลส่ง LoRa แบบ Byte Array ดิบ และสตรีมมิ่งแดชบอร์ดพิท |
| **Month 11** | [Month_11_Precharge_and_Contactor](./Month_11_Precharge_and_Contactor) | วงจรทริกขับ Contactor และวงจรพรีชาร์จป้องกันสปาร์กวงจรกำลัง 48V |
| **Month 12** | [Month_12_FSM_and_HIL_Simulation](./Month_12_FSM_and_HIL_Simulation) | ระบบ VCU State Machine (FSM) และการจำลองสัญญาณ HIL ดีบั๊กบนโต๊ะแล็บ |
| **Month 13** | [Month_13_Harness_and_EMI](./Month_13_Harness_and_EMI) | การเดินระบบ Wiring Harness ลงรถจริง และติดตั้งชิลด์ป้องกัน EMI สัญญาณกวน |
| **Month 14** | [Month_14_Tech_Docs_and_Mock_Scrutineering](./Month_14_Tech_Docs_and_Mock_Scrutineering) | จัดทำเอกสารไฟฟ้าอังกฤษ (Art. 67) และซ้อมด่านตรวจสภาพ Mock Scrutineering |
| **Month 15** | [Month_15_First_Drive_and_Safe_Mode](./Month_15_First_Drive_and_Safe_Mode) | โหมดจำกัดกำลัง Conservative รันรถวิ่งจริงครั้งแรก และซ้อมสับเปลี่ยนบอร์ดกู้ชีพ |
| **Month 16** | [Month_16_Log_Data_Analysis](./Month_16_Log_Data_Analysis) | วิเคราะห์ประเมินไฟล์ Log CSV รอบการวิ่งเพื่อจูนพฤติกรรมขับประหยัดไฟ |
| **Month 17** | [Month_17_Thermal_and_Coasting](./Month_17_Thermal_and_Coasting) | ระบบ Thermal Derating ป้องกันมอเตอร์ร้อนจัด และโหมด Coasting ปล่อยไหลฟรี |
| **Month 18** | [Month_18_Long_Run_Reliability](./Month_18_Long_Run_Reliability) | การทดสอบวิ่งระยะยาว 4 ชั่วโมงเพื่อตรวจวัดความเสถียรและ Memory Leak |
| **Month 19** | [Month_19_Git_Release_and_Checksum](./Month_19_Git_Release_and_Checksum) | ล็อกรุ่นซอฟต์แวร์ด้วย Git tag v1.0-race และการปั๊มรหัส SHA-256 ตรวจสอบ |
| **Month 20** | [Month_20_Tech_Doc_Approval](./Month_20_Tech_Doc_Approval) | ส่งยื่นเอกสารอนุมัติทางไฟฟ้าล่วงหน้าผ่านเว็บพอร์ทัลของ Shell |
| **Month 21-25** | [Month_21_25_Race_Preparation](./Month_21_25_Race_Preparation) | Code Freeze ถาวร จัดตั้งชุดกล่องกู้ชีพ VCU และสนับสนุนทีมไฟฟ้าในวันแข่งจริง |

---

## 🛠️ ขั้นตอนสำหรับการเริ่มต้นสำหรับผู้เรียนใหม่ (How to Start)
1. **ติดตั้งโปรแกรมเตรียมพร้อม:**
   - ติดตั้ง [Git For Windows](https://git-scm.com/) ลงเครื่องคอมพิวเตอร์ของคุณ
   - ติดตั้งตัวเขียนโปรแกรม [VS Code Editor](https://code.visualstudio.com/)
2. **ดาวน์โหลดเอกสารเสริม:**
   - ศึกษาภาพรวมกิจกรรมและลำดับส่งมอบทั้งหมดได้ในเอกสาร [EcoMileLab_Embedded_Learning_Guide.xlsx](../EcoMileLab_Embedded_Learning_Guide.xlsx)
3. **ทำการ Clone คลังเก็บข้อมูลนี้เพื่อนำไปทำแบบฝึกหัด:**
   ```bash
   git clone <ลิ้งก์ของ GitHub Repo นี้เมื่อคุณสร้างเสร็จ>
   ```

---
*EcoMileLab — Engineering for a Greener Tomorrow*
