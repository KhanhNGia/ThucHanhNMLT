#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 1000
void taoMangNhapTay(float a[], int n);
void taoMangRandom(float a[], int n);
void xuatMang(float a[], int n);
float tinhTong(float a[], int n);
double tinhTrungBinh(float a[], int n);
float tongDuong(float a[], int n);
void daoNguoc(float a[], int n);
int kiemTraDoiXung(float a[], int n);
int kiemTraTang(float a[], int n);
int main() {
    float a[MAX];
    int n = 0, chon;
    do {
        printf("\nMENU\n");
        printf("1. Tao mang 1 chieu (nhap tay hoac random)\n");
        printf("2. Xuat mang\n");
        printf("3. Tinh tong cac gia tri mang\n");
        printf("4. Tinh gia tri trung binh\n");
        printf("5. Tinh tong cac gia tri duong\n");
        printf("6. Dao nguoc mang\n");
        printf("7. Kiem tra tinh doi xung\n");
        printf("8. Kiem tra mang tang\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);
        switch (chon) {
        case 1: {
            printf("Nhap so phan tu n: ");
            scanf("%d", &n);
            int cach;
            printf("1. Nhap tay\n2. Random\n--> ");
            scanf("%d", &cach);
            if (cach == 1) taoMangNhapTay(a, n);
            else taoMangRandom(a, n);
            break;
        }
        case 2: 
            xuatMang(a, n);
            break;
        case 3:
            printf("Tong cac gia tri = %.2f\n", tinhTong(a, n));
            break;
        case 4:
            printf("Gia tri trung binh = %.2f\n", tinhTrungBinh(a, n));
            break;
        case 5:
            printf("Tong cac gia tri duong = %.2f\n", tongDuong(a, n));
            break;
        case 6: {
            daoNguoc(a, n);
            xuatMang(a, n);
            break;
        }         
        case 7: {
            int kq = kiemTraDoiXung(a, n);
            if (kq == -1)
                printf("Mang khong doi xung\n");
            else
                printf("Mang doi xung\n");
            break;
        }
        case 8: {
            int kq = kiemTraTang(a, n);
            if (kq)
                printf("Mang la mang tang\n");
            else
                printf("Mang khong tang\n");
            break;
        }
        case 0:
            printf("Thoat\n");
            break;
        default:
            printf("Lua chon khong hop le\n");
        }
    } while (chon != 0);
    return 0;
}
void taoMangNhapTay(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}
void taoMangRandom(float a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = (float)(rand() % 1000)/ 10 - 50;
    }
}
void xuatMang(float a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%.2f ", a[i]);
}
float tinhTong(float a[], int n) {
    float tong = 0;
    for (int i = 0; i < n; i++)
        tong += a[i];
    return tong;
}
double tinhTrungBinh(float a[], int n) {
    if (n == 0) return 0;
    return tinhTong(a, n) / n;
}
float tongDuong(float a[], int n) {
    float tong = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0) tong += a[i];
    return tong;
}
void daoNguoc(float a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        float temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}
int kiemTraDoiXung(float a[], int n) {
    int doiXung = 1;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            doiXung = -1;
            break;
        }
    }
    return doiXung;
}
int kiemTraTang(float a[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return 0;
    return 1;
}
