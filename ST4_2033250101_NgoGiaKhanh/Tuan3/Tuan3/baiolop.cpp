//CAU TRUC LAP
#include<stdio.h>
//bai1
//int main() {
//	int n, tong=0;
//	printf("Nhap n:");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i += 2)
//		tong = tong + i;
//	printf("Tong cac so chan be hon n la %d", tong);
//	return 0;
//}
//-------------
//bai2
//int main() {
//	int n;
//	printf("Nhap n:");
//	scanf_s("%d", &n);
//	for (int i = 1; i < n; i++)
//	{
//		if (i % 3 == 0)
//			printf(" %d", i);
//	}
//	return 0;
//}
//-----------------
//bai3
//int main() {
//    char choice;
//    int n, i;
//    float S;
//    printf("MENU TINH TOAN\n");
//    printf("a. S = 1*2*3*...*n\n");
//    printf("b. S = 2+4+6+...+n\n");
//    printf("c. S = 1*2 + 2*3 + ... + n*(n+1)\n");
//    printf("d. S = 1/(1*2*3) + 1/(2*3*4) + ... + 1/n*(n+1)*(n+2)\n");
//    printf("Chon a,b,c,d: ");
//    scanf_s(" %c", &choice);
//    switch (choice) {
//    case 'a':
//        printf("Nhap n: ");
//        scanf_s("%d", &n);
//        S = 1;
//        for (i = 1; i <= n; i++) S *= i;
//        printf("S = %.2f\n", S);
//        break;
//    case 'b':
//        printf("Nhap n: ");
//        scanf_s("%d", &n);
//        S = 0;
//        for (i = 2; i <= n; i += 2) S += i;
//        printf("S = %f\n", S);
//        break;
//    case 'c':
//        printf("Nhap n: ");
//        scanf_s("%d", &n);
//        S = 0;
//        for (i = 1; i <= n; i++) S += i * (i + 1);
//        printf("S = %.2f\n", S);
//        break;
//    case 'd':
//        printf("Nhap n: ");
//        scanf_s("%d", &n);
//        S = 0;
//        for (i = 1; i <= n; i++)
//            S += 1.0000 / (i * (i + 1) * (i + 2));
//        printf("S= %.4f\n", S);
//        break;
//    default:
//        printf("Lua chon khong hop le");
//    }
//    return 0;
//}
//----------------
//bai4
//int main() {
//    int i;
//    printf("Cac so nguyen la boi cua 7 co 2 chu so:\n");
//    for (i = 10; i <= 99; i++) {
//        if (i % 7 == 0) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    return 0;
//}
//--------------------
//bai5
//int main() {
//    int i, tong, a, b, c;
//    printf("Cac so nguyen co 3 chu so va tong cac chu so la chan:\n");
//    for (i = 100; i <= 999; i++) {
//        a = i / 100;
//        b = (i / 10) % 10;
//        c = i % 10;
//        tong = a + b + c;
//        if (tong % 2 == 0) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    return 0;
//}
//------------------------------------------
//     CAU TRUC LAP tt
// bai1
#include <stdio.h>
//int main() {
//    int n, i, dem = 0;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    if (n <= 1) {
//        printf("%d khong phai la so nguyen to.\n", n);
//    }
//    else {
//        for (i = 1; i <= n; i++) {
//            if (n % i == 0) {
//                dem++;
//            }
//        }
//        if (dem == 2) {
//            printf("%d la so nguyen to.\n", n);
//        }
//        else {
//            printf("%d khong phai la so nguyen to.\n", n);
//        }
//    }
//    return 0;
//}
//---------------------bai2
//int main() {
//    int n, dem = 0, a;
//    printf("Nhap n (n > 0): ");
//    scanf_s("%d", &n);
//    while (n > 0) {
//        a = n % 10;
//        if (a % 2 == 0) {
//            dem++;
//        }
//        n /= 10;
//    }
//    printf("So chu so chan: %d", dem);
//    return 0;
//}
//---------------------bai3
//int main() {
//    int a, b, i, ucln, bcnn;
//    printf("Nhap a va b (a > 0, b > 0): ");
//    scanf_s("%d %d", &a, &b);
//    ucln = 1;
//    for (i = 1; i <= a && i <= b; i++) {
//        if (a % i == 0 && b % i == 0) {
//            ucln = i;
//        }
//    }
//    bcnn = (a * b) / ucln;
//    printf("UCLN(%d, %d) = %d\n", a, b, ucln);
//    printf("BCNN(%d, %d) = %d\n", a, b, bcnn);
//    return 0;
//}
//-----------------bai4
//int main() {
//    int n, i = 1, tong = 0;
//    printf("Nhap n (n > 0): ");
//    scanf_s("%d", &n);
//    while (i < n) {
//        tong += i;
//        i++;
//    }
//    printf("Tong cac so tu nhien nho hon %d la: %d", n, tong);
//    return 0;
//}
//-------------bai5
//int main() {
//    int num, tong = 0;
//    printf("Nhap cac so nguyen (nhap 0 de ket thuc):\n");
//    scanf_s("%d", &num);
//    while (num != 0) {
//        tong += num;
//        scanf_s("%d", &num);
//    }
//    printf("Tong cac so vua nhap la: %d", tong);
//    return 0;
//}
//------------bai6
//int main() {
//    int num, a, b, c;
//    int dem = 0;
//    printf("Nhap cac so co 3 chu so va cac chu so khac nhau (nhap so khong dung dieu kien de ket thuc):\n");
//    scanf_s("%d", &num);
//    while (num >= 100 && num <= 999) {
//        a = num / 100;
//        b = (num / 10) % 10;
//        c = num % 10;
//        if (a != b && a != c && b != c) {
//            dem++;
//        }
//        else {
//            break;
//        }
//        scanf_s("%d", &num);
//    }
//    printf("So luong cac so hop le vua nhap la: %d", dem);
//    return 0;
//}