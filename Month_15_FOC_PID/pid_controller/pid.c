#include <stdio.h>

typedef struct {
    float kp;
    float ki;
    float kd;
    float prev_error;
    float integral;
    float output_limit;
} pid_controller_t;

void pid_init(pid_controller_t *pid, float kp, float ki, float kd, float limit) {
    pid->kp = kp;
    pid->ki = ki;
    pid->kd = kd;
    pid->prev_error = 0.0f;
    pid->integral = 0.0f;
    pid->output_limit = limit;
}

float pid_calculate(pid_controller_t *pid, float target, float feedback, float dt) {
    float error = target - feedback;
    
    // สัดส่วน (Proportional)
    float p_out = pid->kp * error;
    
    // สะสม (Integral) พร้อมป้องกันการอิ่มตัวของตัวสะสม (Anti-windup limit)
    pid->integral += error * dt;
    float i_out = pid->ki * pid->integral;
    if (i_out > pid->output_limit) {
        i_out = pid->output_limit;
    } else if (i_out < -pid->output_limit) {
        i_out = -pid->output_limit;
    }
    
    // อัตราการเปลี่ยน (Derivative)
    float d_out = pid->kd * (error - pid->prev_error) / dt;
    pid->prev_error = error;
    
    float total_output = p_out + i_out + d_out;
    
    // ลิมิตกำลังส่งออกสูงสุด
    if (total_output > pid->output_limit) {
        total_output = pid->output_limit;
    } else if (total_output < -pid->output_limit) {
        total_output = -pid->output_limit;
    }
    
    return total_output;
}
