#include <stdio.h>

typedef enum {
    STATE_OFF,
    STATE_INIT,
    STATE_PRECHARGE,
    STATE_READY,
    STATE_FAULT
} vcu_state_t;

vcu_state_t current_state = STATE_OFF;

void process_vcu_fsm(bool button_pressed, float capacitor_voltage, bool has_fault) {
    if (has_fault) {
        current_state = STATE_FAULT;
    }

    switch (current_state) {
        case STATE_OFF:
            if (button_pressed) {
                current_state = STATE_INIT;
            }
            break;
            
        case STATE_INIT:
            // เตรียมเริ่มต้น และสั่งเปิดรีเลย์พรีชาร์จ
            current_state = STATE_PRECHARGE;
            break;
            
        case STATE_PRECHARGE:
            // หากตัวเก็บประจุภายในสะสมแรงดันไฟฟ้าถึง 90% (~43V สำหรับระบบ 48V)
            if (capacitor_voltage >= 43.0f) {
                current_state = STATE_READY;
            }
            break;
            
        case STATE_READY:
            // รถพร้อมทำงานและเปิดป้อนกระแสขับเคลื่อนมอเตอร์
            if (!button_pressed) {
                current_state = STATE_OFF;
            }
            break;
            
        case STATE_FAULT:
            // ล็อกตัวไม่ให้ทำงานเพื่อความปลอดภัย ต้องแก้ไขและตรวจสถานะก่อน
            if (!has_fault) {
                current_state = STATE_OFF; // ปลดล็อกหลังเคลียร์ปัญหา
            }
            break;
    }
}
