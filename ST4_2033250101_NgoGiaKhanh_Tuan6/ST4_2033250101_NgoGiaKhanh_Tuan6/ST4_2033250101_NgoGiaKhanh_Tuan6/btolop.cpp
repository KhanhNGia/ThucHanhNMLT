//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX 1000
//void taoMangNhapTay(int a[], int n);
//void taoMangRandom(int a[], int n);
//void xuatMang(int a[], int n);
//double tinhTrungBinh(int a[], int n);
//void xuatViTriChan(int a[], int n);
//int demSoDuong(int a[], int n);
//int demSoLanX(int a[], int n, int x);
//void timViTriX(int a[], int n, int x);
//int timMax(int a[], int n);
//int timMin(int a[], int n);
//int tonTaiSo0(int a[], int n);
//int timSoChanLonNhat(int a[], int n);
//int laSoNguyenTo(int n);
//int demSoNguyenTo(int a[], int n);
//int main() {
//    int a[MAX];
//    int n = 0, chon, x;
//    do {
//        printf("\nMENU \n");
//        printf("1. Tao mang 1 chieu (nhap tay hoac random)\n");
//        printf("2. Xuat mang\n");
//        printf("3. Tinh gia tri trung binh\n");
//        printf("4. Xuat cac phan tu o vi tri chan\n");
//        printf("5. Dem so phan tu duong\n");
//        printf("6. Dem so lan x xuat hien\n");
//        printf("7. Tim vi tri cua x\n");
//        printf("8. Tim max, min (linh canh)\n");
//        printf("9. Kiem tra ton tai gia tri 0 (1/0)\n");
//        printf("10. Tim so chan lon nhat (-1 neu khong co)\n");
//        printf("11. Dem so nguyen to trong mang\n");
//        printf("0. Thoat\n");
//        printf("Nhap lua chon: \n");
//        scanf("%d", &chon);
//        switch (chon) {
//        case 1: {
//            printf("Nhap so phan tu n: ");
//            scanf("%d", &n);
//            int cach;
//            printf("1. Nhap tay\n2. Random\n-> ");
//            scanf("%d", &cach);
//            if (cach == 1)
//                taoMangNhapTay(a, n);
//            else
//                taoMangRandom(a, n);
//            break;
//        }
//        case 2:
//            xuatMang(a, n);
//            break;
//        case 3:
//            printf("Gia tri trung binh = %.2f\n", tinhTrungBinh(a, n));
//            break;
//        case 4:
//            xuatViTriChan(a, n);
//            break;
//        case 5:
//            printf("So luong so duong = %d\n", demSoDuong(a, n));
//            break;
//        case 6:
//            printf("Nhap x: ");
//            scanf("%d", &x);
//            printf("So lan %d xuat hien = %d\n", x, demSoLanX(a, n, x));
//            break;
//        case 7:
//            printf("Nhap x: ");
//            scanf("%d", &x);
//            timViTriX(a, n, x);
//            break;
//        case 8:
//            printf("Max = %d, Min = %d\n", timMax(a, n), timMin(a, n));
//            break;
//        case 9:
//            printf("Ket qua = %d\n", tonTaiSo0(a, n));
//            break;
//        case 10:
//            printf("So chan lon nhat = %d\n", timSoChanLonNhat(a, n));
//            break;
//        case 11:
//            printf("So nguyen to trong mang=%d\n", demSoNguyenTo(a, n));
//            break;
//        case 0:
//            printf("Thoat\n");
//            break;
//        default:
//            printf("Lua chon khong hop le\n");
//        }
//    } while (chon != 0);
//    return 0;
//}
//void taoMangNhapTay(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf("a[%d] = ", i);
//        scanf("%d", &a[i]);
//    }
//}
//void taoMangRandom(int a[], int n) {
//    srand(time(NULL));
//    for (int i = 0; i < n; i++) {
//        a[i] = rand() % 100 - 50;
//    }
//}
//void xuatMang(int a[], int n) {
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//}
//double tinhTrungBinh(int a[], int n) {
//    double tong = 0;
//    for (int i = 0; i < n; i++)
//        tong += a[i];
//    return tong / n;
//}
//void xuatViTriChan(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        if (a[i] % 2 == 0)
//            printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//int demSoDuong(int a[], int n) {
//    int count = 0;
//    for (int i = 0; i < n; i++)
//        if (a[i] > 0) count++;
//    return count;
//}
//int demSoLanX(int a[], int n, int x) {
//    int count = 0;
//    for (int i = 0; i < n; i++)
//        if (a[i] == x) count++;
//    return count;
//}
//void timViTriX(int a[], int n, int x) {
//    int tim = 0;
//    for (int i = 0; i < n; i++)
//        if (a[i] == x) {
//            printf("%d ", i);
//            tim = 1;
//        }
//    if (tim == 0)
//        printf("Khong tim thay\n");
//}
//int timMax(int a[], int n) {
//    int max = a[0];
//    for (int i = 1; i < n; i++)
//        if (a[i] > max)
//            max = a[i];
//    return max;
//}
//int timMin(int a[], int n) {
//    int min = a[0];
//    for (int i = 1; i < n; i++)
//        if (a[i] < min)
//            min = a[i];
//    return min;
//}
//int tonTaiSo0(int a[], int n) {
//    for (int i = 0; i < n; i++)
//        if (a[i] == 0)
//            return 1;
//    return 0;
//}
//int timSoChanLonNhat(int a[], int n) {
//    int maxChan = -1;
//    for (int i = 0; i < n; i++)
//        if (a[i] % 2 == 0 && a[i] > maxChan)
//            maxChan = a[i];
//    return maxChan;
//}
//int laSoNguyenTo(int n) {
//    if (n < 2) return 0;
//    for (int i = 2; i * i <= n; i++)
//        if (n % i == 0) return 0;
//    return 1;
//}
//int demSoNguyenTo(int a[], int n) {
//    int count = 0;
//    for (int i = 0; i < n; i++)
//        if (laSoNguyenTo(a[i])) count++;
//    return count;
//}