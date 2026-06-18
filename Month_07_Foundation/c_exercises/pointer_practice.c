#include <stdio.h>
#include <assert.h>

typedef struct {
    float voltage;
    float current;
    char status;
} vehicle_data_t;

// การส่งข้อมูลแบบส่งที่อยู่อ้างอิง (Pass by Pointer) เพื่อความเร็วและประหยัด RAM
void update_sensor(vehicle_data_t *data, float v, float c, char s) {
    if (data != NULL) {
        data->voltage = v;
        data->current = c;
        data->status = s;
    }
}

int main() {
    vehicle_data_t car;
    car.voltage = 0.0f;
    car.current = 0.0f;
    car.status = 'I'; // Idle

    // เรียกฟังก์ชันโดยการส่ง Address ของตัวแปร (&car)
    update_sensor(&car, 48.6f, 12.4f, 'R'); // Ready

    assert(car.voltage == 48.6f);
    assert(car.current == 12.4f);
    assert(car.status == 'R');

    printf("Pointer & Struct Practice: PASS ALL TESTS!\n");
    return 0;
}
