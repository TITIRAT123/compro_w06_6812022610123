#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;
    int r1, r2;
    float r3, r4;

    // คำนวณนิพจน์
    r1 = a++ * b + (int)y % 3;  
    r2 = (a > b) && ((int)x / b < 2); 
    r3 = ++x * y - a / 2;  
    r4 = ((x += 1.5) > y) || (b-- > 0); 

    // แสดงผลลัพธ์
    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %.2f\n", r3);
    printf("r4 = %.2f\n", r4);

    // อภิปรายผล
    printf("\n--- อภิปรายผล ---\n");
    printf("r1: ใช้ค่า a ก่อนเพิ่ม (post-increment) ทำให้ a เพิ่มหลังคูณ b\n");
    printf("r2: เปรียบเทียบแบบ AND สองเงื่อนไข ต้องเป็นจริงทั้งคู่\n");
    printf("r3: ใช้ pre-increment กับ x เพิ่มก่อนคูณ y แล้วลบด้วย a/2\n");
    printf("r4: OR ระหว่างการเปรียบเทียบสองฝั่ง ฝั่งซ้ายเป็นจริงจึงไม่ประเมินฝั่งขวา\n");

    return 0;
}
