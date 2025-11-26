// Bai1
//#include <stdio.h>
//#include <math.h>
//float dientich(float a, float b, float c) {
//    if (a + b <= c || a + c <= b || b + c <= a) {
//        return -1;
//    }
//    float p = (a + b + c) / 2;
//    float S = sqrt(p * (p - a) * (p - b) * (p - c));
//    return S;
//}
//int main() {
//    float a, b, c;
//    printf("Nhap ba canh tam giac: ");
//    scanf_s("%f %f %f", &a, &b, &c);
//    float S = dientich(a, b, c);
//    if (S == -1) {
//        printf("Ba canh khong tao thanh tam giac hop le\n");
//    }
//    else {
//        printf("Dien tich tam giac = %.2f\n", S);
//    }
//    return 0;
//}
//----------------Bai2
//int TongUoc(int n) {
//    int tong = 0;
//    for (int i = 1; i <= n; i++) {
//        if (n % i == 0)
//            tong += i;
//    }
//    return tong;
//}
//int SoNgayTrongThang(int thang, int nam) {
//    if (thang < 1 || thang > 12)
//        return -1;
//    switch (thang) {
//    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        return 31;
//    case 4: case 6: case 9: case 11:
//        return 30;
//    case 2:
//        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
//            return 29;
//        else
//            return 28;
//    }
//    return -1;
//}
//void DoiCho(int &x, int &y) {
//    int temp = x;
//    x = y;
//    y = temp;
//}
//int UCLN(int a, int b) {
//    while (b != 0) {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//int BCNN(int a, int b) {
//    return (a * b) / UCLN(a, b);
//}
//int ToanChuSoLe(int n) {
//    while (n > 0) {
//        int d = n % 10;
//        if (d % 2 == 0)  // Nếu có chữ số chẵn thì sai
//            return 0;
//        n /= 10;
//    }
//    return 1;
//}
//int main() {
//    int chon;
//    do {
//        printf("MENU\n");
//        printf("1. Tinh tong cac uoc cua n\n");
//        printf("2. Tim so ngay trong thang\n");
//        printf("3. Doi cho 2 so nguyen x, y\n");
//        printf("4. Tim BCNN cua a va b\n");
//        printf("5. Kiem tra so co toan chu so le\n");
//        printf("Nhap lua chon: ");
//        scanf_s("%d", &chon);
//        if (chon == 1) {
//            int n;
//            printf("Nhap n: ");
//            scanf_s("%d", &n);
//            printf("Tong cac uoc cua %d = %d\n", n, TongUoc(n));
//        }
//        else if (chon == 2) {
//            int thang, nam;
//            printf("Nhap thang: ");
//            scanf_s("%d", &thang);
//            printf("Nhap nam: ");
//            scanf_s("%d", &nam);
//            int kq = SoNgayTrongThang(thang, nam);
//            if (kq == -1)
//                printf("Thang khong hop le!\n");
//            else
//                printf("Thang %d nam %d co %d ngay.\n", thang, nam, kq);
//        }
//        else if (chon == 3) {
//            int x, y;
//            printf("Nhap x: ");
//            scanf_s("%d", &x);
//            printf("Nhap y: ");
//            scanf_s("%d", &y);
//            DoiCho(x, y);
//            printf("Sau khi doi cho: x = %d, y = %d\n",x, y);
//        }
//        else if (chon == 4) {
//            int a, b;
//            printf("Nhap a: ");
//            scanf_s("%d", &a);
//            printf("Nhap b: ");
//            scanf_s("%d", &b);
//            printf("BCNN(%d, %d) = %d\n", a, b, BCNN(a, b));
//        }
//        else if (chon == 5) {
//            int n;
//            printf("Nhap n: ");
//            scanf_s("%d", &n);
//            if (ToanChuSoLe(n))
//                printf("%d co tat ca cac chu so le\n", n);
//            else
//                printf("%d ko co tat ca cac chu so le\n", n);
//        }
//    } while (chon != 0);
//    return 0;
//}
//-----------------Bai3
//int LaNguyenTo(int n) {
//    if (n < 2) return 0;
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) return 0;
//    }
//    return 1;
//}
//int TongNguyenTo(int n) {
//    int tong = 0;
//    for (int i = 2; i < n; i++) {
//        if (LaNguyenTo(i))
//            tong += i;
//    }
//    return tong;
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("Tong cac so nguyen to nho hon %d = %d\n", n, TongNguyenTo(n));
//    return 0;
//}
//-----------------Bai4
//int LaChinhPhuong(int n) {
//    int r = (int)sqrt(n);
//    return r * r == n;
//}
//int DemChinhPhuong(int n) {
//    int dem = 0;
//    for (int i = 1; i < n; i++) {
//        if (LaChinhPhuong(i))
//            dem++;
//    }
//    return dem;
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("Co %d so chinh phuong nho hon %d\n", DemChinhPhuong(n), n);
//    return 0;
//}
//---------------------BAi5
//double S(int n) {
//    if (n == 1)
//        return sqrt(2);
//    else
//        return sqrt(2 + S(n - 1));
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S(%d) = %.6f\n", n, S(n));
//    return 0;
//}
//---------------Bai6
//double TongPhanSo(int n) {
//    if (n == 1) return 1;
//    return TongPhanSo(n - 1) + 1.0 / n;
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("Tong S(%d) = %.2f\n", n, TongPhanSo(n));
//    return 0;
//}
//-------------------Bai7
//long long gt(int n) {
//    if (n == 0 || n == 1) return 1;
//    return n * gt(n - 1);
//}
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("%d! = %lld\n", n, gt(n));
//    return 0;
//}
