#include <stdio.h>

int main() {
    double x, y, z, a;
    double total, price, quantity, discount;
    double rate;
    double score, penalty, mistake;

    // กำหนดค่าทดสอบ
    x = 20.0;
    y = 5.0;
    z = 3.0;
    a = 2.0;

    total = 100.0;
    price = 50.0;
    quantity = 2.0;
    discount = 10.0;

    rate = 5.0;

    score = 100.0;
    penalty = 2.0;
    mistake = 3.0;

    printf("ก่อนคำนวณ: x = %.2f, total = %.2f, score = %.2f\n\n", x, total, score);

    // 1) x = x - 4.0
    double x1 = x;
    x1 = x1 - 4.0;   // แบบเต็ม
    printf("แบบเต็ม: x = %.2f\n", x1);

    x1 = x;
    x1 -= 4.0;       // แบบย่อ
    printf("แบบย่อ : x = %.2f\n\n", x1);

    // 2) x = 6.5 * x
    double x2 = x;
    x2 = 6.5 * x2;   // แบบเต็ม
    printf("แบบเต็ม: x = %.2f\n", x2);

    x2 = x;
    x2 *= 6.5;       // แบบย่อ
    printf("แบบย่อ : x = %.2f\n\n", x2);

    // 3) x = x % (y + z * a)
    int xi = (int)x; // ต้องใช้ int เพราะ %
    int yi = (int)y;
    int zi = (int)z;
    int ai = (int)a;

    int res1 = xi;
    res1 = res1 % (yi + zi * ai); // แบบเต็ม
    printf("แบบเต็ม: x %% (y + z * a) = %d\n", res1);

    res1 = xi;
    res1 %= (yi + zi * ai);       // แบบย่อ
    printf("แบบย่อ : x %%= (y + z * a) = %d\n\n", res1);

    // 4) x = x / (2.0 * x)
    double x4 = x;
    x4 = x4 / (2.0 * x4); // แบบเต็ม
    printf("แบบเต็ม: %.2f\n", x4);

    x4 = x;
    x4 /= (2.0 * x4);     // แบบย่อ
    printf("แบบย่อ : %.2f\n\n", x4);

    // 5) total = total + (price * quantity - discount)
    double t1 = total;
    t1 = t1 + (price * quantity - discount); // แบบเต็ม
    printf("แบบเต็ม: total = %.2f\n", t1);

    t1 = total;
    t1 += (price * quantity - discount);     // แบบย่อ
    printf("แบบย่อ : total = %.2f\n\n", t1);

    // 6) x = x * (1 + rate / 100)
    double x6 = x;
    x6 = x6 * (1 + rate / 100); // แบบเต็ม
    printf("แบบเต็ม: x = %.2f\n", x6);

    x6 = x;
    x6 *= (1 + rate / 100);     // แบบย่อ
    printf("แบบย่อ : x = %.2f\n\n", x6);

    // 7) score = score - (penalty * (mistake + 1))
    double s1 = score;
    s1 = s1 - (penalty * (mistake + 1)); // แบบเต็ม
    printf("แบบเต็ม: score = %.2f\n", s1);

    s1 = score;
    s1 -= (penalty * (mistake + 1));     // แบบย่อ
    printf("แบบย่อ : score = %.2f\n", s1);

    return 0;
}
