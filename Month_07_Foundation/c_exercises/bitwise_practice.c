#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <stdbool.h>

// แบบฝึกหัดที่ 1: การตั้งค่าบิต (Set Bit) ให้บิตตำแหน่ง n เป็น 1
uint8_t set_bit(uint8_t value, int n) {
    return value | (1 << n);
}

// แบบฝึกหัดที่ 2: การเคลียร์บิต (Clear Bit) ให้บิตตำแหน่ง n เป็น 0
uint8_t clear_bit(uint8_t value, int n) {
    return value & ~(1 << n);
}

// แบบฝึกหัดที่ 3: การสลับบิต (Toggle Bit)
uint8_t toggle_bit(uint8_t value, int n) {
    return value ^ (1 << n);
}

// แบบฝึกหัดที่ 4: การตรวจสอบบิต (Check Bit) ว่าเป็น 1 หรือไม่
bool check_bit(uint8_t value, int n) {
    return (value & (1 << n)) != 0;
}

int main() {
    uint8_t val = 0b00000000;
    
    // ทดสอบการ Set Bit
    val = set_bit(val, 3); // ควรได้ 0b00001000 (8)
    assert(val == 8);
    
    // ทดสอบการ Check Bit
    assert(check_bit(val, 3) == true);
    assert(check_bit(val, 0) == false);
    
    // ทดสอบการ Clear Bit
    val = clear_bit(val, 3); // ควรกลับเป็น 0
    assert(val == 0);
    
    // ทดสอบการ Toggle Bit
    val = toggle_bit(val, 5); // 0b00100000 (32)
    assert(val == 32);
    val = toggle_bit(val, 5); // กลับเป็น 0
    assert(val == 0);
    
    printf("Bitwise Practice: PASS ALL TESTS!\n");
    return 0;
}
