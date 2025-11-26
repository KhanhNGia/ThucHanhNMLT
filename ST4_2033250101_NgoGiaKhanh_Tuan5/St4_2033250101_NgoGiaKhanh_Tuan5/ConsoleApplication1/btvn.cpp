//-----------------Bai8
#include<stdio.h>
#include<math.h>
//int Dao(int n) {
//    int dao = 0;
//    while (n > 0) {
//        int a = n % 10;
//        dao = dao * 10 + a;
//        n = n / 10;
//    }
//    return dao;
//}
//int main() {
//    int n;
//    printf("Nhap so nguyen duong n: ");
//    scanf_s("%d", &n);
//    if (n <= 0) {
//        printf("Vui long nhap so nguyen duong\n");
//        return 0;
//    }
//    printf("So dao cua %d la %d\n", n, Dao(n));
//    return 0;
//}
//-------------------Bai10
//int Tong(int n) {
//    int tong = 0;
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 == 1) {
//            tong += i;
//        }
//        else {
//            tong -= i;
//        }
//    }
//    return tong;
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S(%d) = %d\n", n, Tong(n));
//    return 0;
//}
//-----------------Bai11
//double Tong(int n) {
//    double tong = 0.0;
//    for (int i = 1; i <= n; i++) {
//        tong += 1.0 / (2 * i);
//    }
//    return tong;
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S(%d) = %.4f\n", n, Tong(n));
//    return 0;
//}
// ---------------Bai12
//double Tong(int n) {
//    double tong = 0.0;
//    for (int i = 0; i <= n; i++) {
//        tong += 1.0 / (2 * i + 1);
//    }
//    return tong;
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S(%d) = %.3f\n", n, Tong(n));
//    return 0;
//}
//--------------------Bài13
//int laHoanThien(int n) {
//    int tong = 0;
//    for (int i = 1; i < n; i++) {
//        if (n % i == 0)
//            tong += i;
//    }
//    return tong;
//}
//int main() {
//    int n;
//    printf("Nhap so n: ");
//    scanf_s("%d", &n);
//    if (laHoanThien(n) == n)
//        printf("%d la so hoan thien\n", n);
//    else
//        printf("%d khong la so hoan thien\n", n);
//    return 0;
//}
//-----------------Bai14
//int laNguyenTo(int n) {
//    if (n < 2) return 0;
//    for (int i = 2; i <= sqrt(n); i++)
//        if (n % i == 0) return 0;
//    return 1;
//}
//int main() {
//    int n;
//    printf("Nhap n>0: ");
//    scanf_s("%d", &n);
//    int dem = 0, num = 2;
//    printf("Cac so nguyen to dau tien: ");
//    while (dem < n) {
//        if (laNguyenTo(num)) {
//            printf("%d ", num);
//            dem++;
//        }
//        num++;
//    }
//    printf("\n");
//    return 0;
//}
//---------------------Bai15
//int laSoChinhPhuong(int n) {
//    for (int i = 1; i * i <= n; i++) {
//        if (i * i == n)
//            return 1;
//    }
//    return 0;
//}
//void xuatSoChinhPhuong(int n) {
//    int dem = 0;
//    int num = 1;
//    while (dem < n) {
//        if (laSoChinhPhuong(num)) {
//            printf("%d ", num);
//            dem++;
//        }
//        num++;
//    }
//    printf("\n");
//}
//int main() {
//    int n;
//    printf("Nhap n>0: ");
//    scanf_s("%d", &n);
//    printf("%d so chinh phuong dau tien la: ", n);
//    xuatSoChinhPhuong(n);
//    return 0;
//}
