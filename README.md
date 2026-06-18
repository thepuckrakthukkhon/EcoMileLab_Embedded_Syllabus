# 🏎️ EcoMileLab Embedded & Electrical Syllabus
> คลังรวบรวมข้อมูลการเรียนรู้วิศวกรรมสมองกลฝังตัวและระบบไฟฟ้ารถยนต์ประหยัดพลังงาน (Shell Eco-Marathon) ตั้งแต่เริ่มต้นจาก 0 สู่ระดับพร้อมลงแข่ง 100%

คลังเก็บข้อมูลแห่งนี้สร้างขึ้นมาเพื่อให้ทีมงานฝ่ายไฟฟ้าและซอฟต์แวร์ของ **EcoMileLab** สามารถศึกษาและร่วมพัฒนาซอฟต์แวร์ควบคุมรถยนต์พลังงานไฟฟ้า VCU (Vehicle Control Unit) ตลอดกระบวนการออกแบบ 25 เดือน

---

## 🗺️ แผนการศึกษารายเดือน (Monthly Roadmap Index)

| เดือน | หัวข้อการเรียนรู้หลัก | รายละเอียดเนื้อหา |
| :---: | :--- | :--- |
| **Month 07** | [Month_07_Foundation](./Month_07_Foundation) | ปูพื้นฐาน Git, ภาษา C และกฎกติกาการแข่งขันของ Shell |
| **Month 08** | [Month_08_FreeRTOS](./Month_08_FreeRTOS) | ระบบปฏิบัติการเวลาจริง (FreeRTOS) บนบอร์ด ESP32 |
| **Month 09** | [Month_09_Protocols](./Month_09_Protocols) | การวัดพารามิเตอร์ไฟฟ้าด้วย INA226 (I2C) และการสตรีมข้อมูล JSON |
| **Month 10** | [Month_10_PCB_Design](./Month_10_PCB_Design) | การวาดวงจร Schematic และลายแผงวงจรพิมพ์ด้วยโปรแกรม KiCad |
| **Month 11** | [Month_11_Precharge_Contactor](./Month_11_Precharge_Contactor) | วงจรกำลังไฟฟ้ากระแสสูง และระบบ Pre-charge ป้องกันกระแสชาร์จ |
| **Month 12** | [Month_12_State_Machines](./Month_12_State_Machines) | การเขียนโปรแกรม Finite State Machine (FSM) และ Interrupt ISR |
| **Month 13** | [Month_13_Angle_Sensor](./Month_13_Angle_Sensor) | การอ่านค่าเซนเซอร์แม่เหล็ก AS5600 รู้ตำแหน่งแกนมอเตอร์แบบเรียลไทม์ |
| **Month 14** | [Month_14_SVPWM](./Month_14_SVPWM) | สัญญาณขับ MOSFET และระบบขับเคลื่อนมอเตอร์แบบ Six-step / SVPWM |
| **Month 15** | [Month_15_FOC_PID](./Month_15_FOC_PID) | ทฤษฎี FOC (Field Oriented Control) และการจูนกระแส PID Loop |
| **Month 16** | [Month_16_First_Drive](./Month_16_First_Drive) | การพัฒนาจำกัดกำลังรถ (Conservative Mode) ในวันวิ่งครั้งแรก |
| **Month 17** | [Month_17_Reliability_Rollback](./Month_17_Reliability_Rollback) | การจัดตั้งเฟิร์มแวร์ NVS Config และขั้นตอนสลับเปลี่ยนบอร์ดกู้ชีพ |
| **Month 18** | [Month_18_Thermal_Derating](./Month_18_Thermal_Derating) | การเขียนโค้ด Thermal Derating ลดพิกัดกำลังขับตามกราฟความร้อน |
| **Month 19** | [Month_19_Coasting_Strategy](./Month_19_Coasting_Strategy) | ระบบตัดกำลังเกตไดรเวอร์ (Coasting Mode) ให้ล้อหมุนไหลลื่นเสรี |
| **Month 20** | [Month_20_Tech_Documentation](./Month_20_Tech_Documentation) | การเขียนแบบไดอะแกรมและจัดเตรียมเอกสาร Tech Doc ภาษาอังกฤษส่ง Shell |
| **Month 21-25** | [Month_21_25_Race_Preparation](./Month_21_25_Race_Preparation) | ล็อกเวอร์ชัน Release v1.0, ตรวจอะไหล่ฉุกเฉิน และซ้อมการเปลี่ยนบอร์ดพิท |

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
