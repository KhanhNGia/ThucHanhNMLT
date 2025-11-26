//  CAU TRUC LAP
#include<stdio.h>
//bai2
//int main() {
//    int h;
//    printf("Nhap so nguyen duong h: ");
//    scanf_s("%d", &h);
//    printf("Tam giac 1\n");
//    for (int i = 1; i <= h; i++) {
//        for (int j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    printf("Tam giac 2\n");
//    for (int i = h; i >= 1; i--) {
//        for (int j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    printf("Tam giac 3\n");
//    for (int i = 1; i <= h; i++) {
//        for (int j = 1; j <= h - i; j++) {
//            printf("  ");
//        }
//        for (int j = 1; j <= 2 * i - 1; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//----------------bai3
//#include <math.h>
//int main() {
//    int n;
//    int S = 0;
//    printf("Nhap n >= 1: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 == 0)
//            S -= i;
//        else
//            S += i;
//    }
//    printf("S(%d) = %d\n", n, S);
//    return 0;
//}
//-----------------------bai4
//int main() {
//    int n;
//    double S = 0;
//    printf("Nhap n >= 1: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++)
//        S += 1.0 / i;
//    printf("S(%d) = %.5f\n", n, S);
//    return 0;
//}
//---------------bai5
//int main() {
//    int n;
//    double S = 0;
//    printf("Nhap n >= 1: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++)
//        S += 1.0 / (2 * i + 1);
//    printf("S(%d) = %.3f\n", n, S);
//    return 0;
//}
//------------------bai6
//int main() {
//    int n;
//    double S = 0;
//    printf("Nhap n >= 1: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++)
//        S += 1.0 / (i * (i + 1));
//    printf("S(%d) = %.3f\n", n, S);
//    return 0;
//}
//------------------bai7
//int main() {
//    int n;
//    float S = 0;
//    printf("Nhap n >= 1: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++)
//        S += (float)i / (i + 1);
//    printf("S(%d) = %.3f\n", n, S);
//    return 0;
//}
// ------------------bai8
//int main() {
//    int n;
//    float S = 0;
//    printf("Nhap n >= 0: ");
//    scanf("%d", &n);
//    for (int i = 0; i <= n; i++) {
//        S += (float)(2 * i + 1) / (2 * i + 2);
//    }
//    printf("S(%d) = %.3f\n", n, S);
//    return 0;
//}
//------------bai9
//int main() {
//int n;
//float x, tich = 1;
//printf("Nhap x: ");
//scanf_s("%f", &x);
//printf("Nhap n: ");
//scanf_s("%d", &n);
//for (int i = 1; i <= n; i++) {
//    tich *= x;
//}
//printf("S = %.2f", tich);
//return 0;
//}
//---------------bai10
//int main() {
//    int n;
//    float x, S = 0, tich = 1;
//    printf("Nhap x: ");
//    scanf_s("%f", &x);
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        tich *= x;
//        S += tich;
//    }
//    printf("S = %.2f", S);
//    return 0;
//}
//-----------------bai11
//int main() {
//    int n;
//    float x, S = 0, tich = 1;
//    int dau = -1;
//    printf("Nhap x: ");
//    scanf_s("%f", &x);
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        tich *= x;
//        S = S + dau * tich;
//        dau = -dau;
//    }
//    printf("S = %.2f\n", S);
//    return 0;
//}
//---------------- CAU TRUC LAP tt
//bai7
//int main() {
//    int n, temp, a;
//    int chan = 1;
//    printf("Nhap so nguyen duong n: ");
//    scanf_s("%d", &n);
//    temp = n;
//    while (temp > 0) {
//        a = temp % 10;
//        if (a % 2 != 0) {
//            chan = 0;
//        }
//        temp = temp / 10;
//    }
//    if (chan != 0)
//        printf("%d co cac chu so la chan\n", n);
//    else
//        printf("%d khong co cac chu so la chan", n);
//    return 0;
//}
//-------------------bai8
//int main() {
//    int n, temp, a;
//    int le = 1;
//    printf("Nhap so nguyen duong n: ");
//    scanf_s("%d", &n);
//    temp = n;
//    while (temp > 0) {
//        a = temp % 10;
//        if (a % 2 == 0) {
//            le = 0;
//        }
//        temp = temp / 10;
//    }
//    if (le != 0)
//        printf("%d co cac chu so la le\n", n);
//    else
//        printf("%d khong co tat ca cac chu so la le", n);
//    return 0;
//}
//-------------bai 11
//int main() {
//    int n, m = 0, tong = 0;
//    printf("Nhap so nguyen duong n: ");
//    scanf("%d", &n);
//    while (tong + (m + 1) < n) {
//        m++;
//        tong += m;
//    }
//    printf("So nguyen duong m lon nhat sao cho 1+2+...+m < %d la: %d\n", n, m);
//    return 0;
//}
//-------------------bai12
//int main() {
//    int n, m = 0, tong = 0;
//    printf("Nhap so nguyen duong n: ");
//    scanf("%d", &n);
//    while (sum <= n) {
//        m++;
//        sum += m;
//    }
//    printf("So nguyen duong nho nhat m sao cho 1 + 2 + ... + m > %d la: %d\n", n, m);
//    return 0;
//}