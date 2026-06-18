#include <stdio.h>
#include "cJSON.h"

// ฟังก์ชันสำหรับแพ็กข้อมูลเป็น JSON String ก่อนส่งออก Telemetry
char* create_telemetry_payload(float speed, float voltage, float temp) {
    cJSON *root = cJSON_CreateObject();
    if (root == NULL) return NULL;

    cJSON_AddNumberToObject(root, "speed", speed);
    cJSON_AddNumberToObject(root, "voltage", voltage);
    cJSON_AddNumberToObject(root, "temp", temp);
    cJSON_AddStringToObject(root, "status", "NORMAL");

    char *out = cJSON_PrintUnformatted(root);
    cJSON_Delete(root);
    return out; // ต้องใช้ free() หลังเรียกใช้งานเพื่อป้องกัน Memory Leak
}
