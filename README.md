# 🏎️ EcoMileLab Embedded & Electrical Syllabus
> คลังรวบรวมข้อมูลการเรียนรู้วิศวกรรมสมองกลฝังตัวและระบบไฟฟ้ารถยนต์ประหยัดพลังงาน (Shell Eco-Marathon) ตั้งแต่เริ่มต้นจาก 0 สู่ระดับพร้อมลงแข่ง 100%

คลังเก็บข้อมูลแห่งนี้สร้างขึ้นมาเพื่อให้ทีมงานฝ่ายไฟฟ้าและซอฟต์แวร์ของ **EcoMileLab** สามารถศึกษาและร่วมพัฒนาซอฟต์แวร์ควบคุมรถยนต์พลังงานไฟฟ้า VCU (Vehicle Control Unit) ตลอดกระบวนการออกแบบ 25 เดือน โดยได้รับการปรับปรุงสอดคล้องตาม Roadmap ล่าสุดเรียบร้อยแล้ว

---

## 🗺️ แผนการศึกษารายเดือน (Monthly Roadmap Index)

| เดือน | หัวข้อการเรียนรู้หลัก | รายละเอียดเนื้อหา |
| :---: | :--- | :--- |
| **Month 07** | [Month_07_Foundation](./Month_07_Foundation) | ปูพื้นฐาน Git, ภาษา C และออกแบบแผงวงจร PCB VCU (LV) ใน KiCad |
| **Month 08** | [Month_08_FreeRTOS](./Month_08_FreeRTOS) | การเขียนโปรแกรมด้วยเฟรมเวิร์ก ESP-IDF และ FreeRTOS บนบอร์ด PCB จริง |
| **Month 09** | [Month_09_Protocols](./Month_09_Protocols) | ไดรเวอร์คันเร่งคู่ Failsafe (ADC) สัญญาณรอบล้อ และการขับมอเตอร์ FOC / VESC |
| **Month 10** | [Month_10_PCB_Design](./Month_10_PCB_Design) | การบีบอัดข้อมูลส่ง LoRa แบบ Byte Array ดิบ และสตรีมมิ่งแดชบอร์ดพิท |
| **Month 11** | [Month_11_Precharge_Contactor](./Month_11_Precharge_Contactor) | วงจรทริกขับ Contactor และวงจรพรีชาร์จป้องกันสปาร์กวงจรกำลัง 48V |
| **Month 12** | [Month_12_State_Machines](./Month_12_State_Machines) | ระบบ VCU State Machine (FSM) และการจำลองสัญญาณ HIL ดีบั๊กบนโต๊ะแล็บ |
| **Month 13** | [Month_13_Angle_Sensor](./Month_13_Angle_Sensor) | การเดินระบบ Wiring Harness ลงรถจริง และติดตั้งชิลด์ป้องกัน EMI สัญญาณกวน |
| **Month 14** | [Month_14_SVPWM](./Month_14_SVPWM) | จัดทำเอกสารไฟฟ้าอังกฤษ (Art. 67) และซ้อมด่านตรวจสภาพ Mock Scrutineering |
| **Month 15** | [Month_15_FOC_PID](./Month_15_FOC_PID) | โหมดจำกัดกำลัง Conservative รันรถวิ่งจริงครั้งแรก และซ้อมสับเปลี่ยนบอร์ดกู้ชีพ |
| **Month 16** | [Month_16_First_Drive](./Month_16_First_Drive) | วิเคราะห์ประเมินไฟล์ Log CSV รอบการวิ่งเพื่อจูนพฤติกรรมขับประหยัดไฟ |
| **Month 17** | [Month_17_Reliability_Rollback](./Month_17_Reliability_Rollback) | ระบบ Thermal Derating ป้องกันมอเตอร์ร้อนจัด และโหมด Coasting ปล่อยไหลฟรี |
| **Month 18** | [Month_18_Thermal_Derating](./Month_18_Thermal_Derating) | การทดสอบวิ่งระยะยาว 4 ชั่วโมงเพื่อตรวจวัดความเสถียรและ Memory Leak |
| **Month 19** | [Month_19_Coasting_Strategy](./Month_19_Coasting_Strategy) | ล็อกรุ่นซอฟต์แวร์ด้วย Git tag v1.0-race และการปั๊มรหัส SHA-256 ตรวจสอบ |
| **Month 20** | [Month_20_Tech_Documentation](./Month_20_Tech_Documentation) | ส่งยื่นเอกสารอนุมัติทางไฟฟ้าล่วงหน้าผ่านเว็บพอร์ทัลของ Shell |
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
