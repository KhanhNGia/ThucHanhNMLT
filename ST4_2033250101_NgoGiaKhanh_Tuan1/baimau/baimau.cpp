#include<stdio.h>
#include<conio.h>
//void main() {
//	printf("Chao ban!\n");
//	printf("Day la chuong trinh C dau tien. \n");
//	printf("Vui long nhap Enter de ket thuc.");
//	_getch();
//}
//---------------------------
//baimau2
//void main(){
//     int a;
//     printf("Nhap so nguyen a:");
//     scanf_s("%d", &a);
//     printf("So nguyen vua nhap la:%d", a);
//     _getch();
//}
//----------------------
//baimau3
//void main() {
//	int a, b, tong, hieu, tich;
//	float thuong;
//	printf("Nhap 2 so nguyen a va b:");
//	scanf_s("%d%d", &a, &b);
//	tong = a + b;
//	hieu = a - b;
//	tich = a * b;
//	thuong = (float)a / (float)b;
//	printf("tong=%d\n", tong);
//	printf("hieu=%d\n", hieu);
//	printf("tich=%d\n", tich);
//	printf("thuong=%.1f", thuong);
//	_getch();
//}
//--------------------
//baimau4
//void main() {
//	int ngayden, ngaydi, songay, sotuan, ngayle;
//	printf("Nhap ngay den va ngay roi di:");
//	scanf_s("%d%d", &ngayden, &ngaydi);
//	songay = ngaydi - ngayden;
//	printf("So ngay da o la: %d\n", songay);
//	sotuan = songay / 7;
//	printf("So tuan la:%d\n", sotuan);
//	ngayle = songay - sotuan * 7;
//	printf("So ngay le la:%d\n", ngayle);
//	int sotien = sotuan * 650 + ngayle * 100;
//	printf("So tien phai tra la:%d.", sotien);
//	_getch;
//}
//-------------------
//baimau5
//void main() {
//	int i = 1;
//	printf("i=%d\n", i);
//	int bt = 10 + ++i;
//	printf("ket qua cua bieu thuc 10 + ++i la:%d;gia tri cua i la: %d\n", bt, i);
//	i = 1;
//	printf("Khoi tao lai gia tri i=%d\n", i);
//	bt = 10 + i++;
//	printf("ket qua cua bieu thuc 10 + i++ la:%d;gia tri cua i la:%d\n", bt, i);
//	_getch();
//}
//-----------------------
//baimau6
//void main() {
//	int as;
//	printf("Nhap ma ASCII:");
//	scanf_s("%d", &as);
//	((as >= 65 && as <= 90) || (as >= 97 && as <= 122)) ? (printf("La chu cai")) : (printf("Ky tu:%c", as));
//	_getch();
//}
//---------------------------
//baiolop1
//void main() {
//	 printf("Que huong la chum khe ngot\n");
//	 printf("Cho con treo hai moi ngay\n");
//	 printf("Que huong la duong di hoc\n");
//	 printf("Con ve rop buom vang bay");
//	 _getch();
//}
//-------------------------
//baiolop2
//void main() {
//	float x;
//	printf("Nhap so thuc x:");
//	scanf_s("%f", &x);
//	int nguyen = (int) x;
//	printf("Phan nguyen cua x la :%d", nguyen);
//	_getch;
//}
//---------------------
//baiolop3
//#define PI 3.14
//void main() {
//	float r, cv, dt;
//	printf("Nhap ban kinh:");
//	scanf_s("%f", &r);
//	cv = 2 * r * PI;
//	dt = r * r * PI;
//	printf("chu vi hinh tron la: %.2f", cv);
//	printf("dien tich hinh tron la: %.2f", dt);
//	_getch();
//}
//----------------------
//baiolop4
//void main() {
//	int a, b, max;
//	printf("nhap 2 so nguyen a va b:");
//	scanf_s("%d%d", &a, &b);
//	max = (a > b) ? a : b;
//	printf("so lon nhat trong 2 so la:%d", max);
//	_getch;
//}
//------------------------------
//baiolop5
//void main() {
//	int a, b;
//	float thuong;
//	printf("Nhap 2 so nguyen a, b:");
//	scanf_s("%d%d", &a, &b);
//	thuong = (float)a / b;
//	printf("Thuong cua a chia cho b :%f\n", thuong);
//	int lamtron = (int)(thuong + 0.5);
//	printf("Lam tron thuong:%d\n", lamtron);
//	printf("In thuong voi 1 so thap phan:%.1f", thuong);
//}
//---------------------
//baiolop6
//#define DonGiaTuan 500000
//#define DonGiaNgay 100000
//void main() {
//	int a;
//	printf("Tinh tien thue phong\n");
//	printf("Don gia tuan:500000. Don gia ngay: 100000\n");
//	printf("Nhap vao tong so ngay da thue phong: ");
//	scanf_s("%d", &a);
//	int sotuan = a / 7;
//	int ngayle = a - sotuan * 7;
//	printf("So tuan ma khach thue:%d, so ngay khach thue: %d\n", sotuan, ngayle);
//	int tien = sotuan * DonGiaTuan + ngayle * DonGiaNgay;
//	printf("Tien phai tra:%d", tien);
//}
//--------------------------------------
//baiolop7
//int main() {
//    int giovao, giora, sobinhnuoc;
//    int tiengio, tiennuoc, Tien;
//    printf("Nhap gio vao (0-24): ");
//    scanf("%d", &giovao);
//    printf("Nhap gio ra (0-24): ");
//    scanf("%d", &giora);
//    if (giora <= giovao) {
//        printf("Gio ra phai lon hon gio vao!\n");
//        return 1;
//    }
//    printf("Nhap so binh nuoc da uong: ");
//    tiengio = (giora - giovao) * 200000;
//    tiennuoc = sobinhnuoc * 20000;
//    Tien = tiengio + tiennuoc;
//    printf("Tong cong  : %d", Tien);
//    return 0;
//}
//----------------------------------
//baiolop8
//int main() {
//    int tuoi, namsinh;
//    int namhientai = 2025;
//    printf("Nhap tuoi cua ban: ");
//    scanf("%d", &tuoi);
//    namsinh = namhientai - tuoi;
//    printf("Ban sinh nam: %d\n", namsinh);
//    return 0;
//}
//-------------------------------
//baiolop10
//int main() {
//    int namsinh, tuoi;
//    int namhientai = 2025;
//    printf("Nhap nam sinh: ");
//    scanf("%d", &namsinh);
//    tuoi = namhientai - namsinh;
//    printf("Tuoi cua ban la: %d\n", tuoi);
//    if (tuoi >= 18) {
//        printf("Du tuoi di lam.\n");
//    }
//    else {
//        printf("Con tuoi di hoc.\n");
//    }
//    return 0;
//}
//-------------------------------
//baiolop11
//int main() {
//    int x;
//    float fx;
//    printf("Nhap gia tri x (so nguyen): ");
//    scanf("%d", &x);
//    if (2 * x + 1 == 0) {
//        printf("Mau so = 0, khong the tinh f(x).\n");
//    }
//    else {
//        fx = (3 * x * x + 4 * x + 5) / (float)(2 * x + 1);
//        printf("Gia tri f(x) = %.2f\n", fx);
//    }
//    return 0;
//}
//-----------------------------
//baiolop12
//#include <math.h>
//int main() {
//    int x;
//    float fx;
//    float tu, mau;
//    printf("Nhap gia tri x (so nguyen): ");
//    scanf("%d", &x);
//    if (x + 1 < 0) {
//        printf("Can bac hai ko the chua so am\n");
//    }
//    else {
//        mau = 5 * x * x - 3;
//        if (mau == 0) {
//            printf("Mau bang 0 ko the chia\n");
//        }
//        else {
//            tu = 5 * x + sqrt(x + 1);
//            fx = tu / mau;
//            printf("Gia tri f(x) = %.4f\n", fx);
//        }
//    }
//    return 0;
//}
//--------------------------------
//btvn1
//int main() {
//    float sothuc;
//    int phannguyen, haichusothapphan;
//    float phanthapphan;
//    float tong;
//    printf("Nhap mot so thuc: ");
//    scanf("%f", &sothuc);
//    phannguyen = (int)sothuc;
//    phanthapphan = sothuc - phannguyen;
//    haichusothapphan = (int)(phanthapphan * 100);
//    tong = phannguyen + (haichusothapphan / 100.0);
//    printf("Phan nguyen: %d\n", phannguyen);
//    printf("So thuc voi 2 chu so thap phan: %.2f\n", sothuc);
//    printf("Hai chu so thap phan: %02d\n", haichusothapphan);
//    printf("Tong phan nguyen va 2 chu so thap phan: %.2f\n", tong);
//    return 0;
//}
//---------------------------
//btvn2
//int main() {
//    char tensp;
//    int sl;
//    float dg;
//    float tien, thue;
//    printf("Nhap ten san pham: ");
//    scanf("%s", &tensp);
//    printf("Nhap so luong: ");
//    scanf("%d", &sl);
//    printf("Nhap don gia: ");
//    scanf("%f", &dg);
//    tien = sl * dg;
//    thue = tien * 0.1;
//    printf("Tien hang: %.2f\n", tien);
//    printf("Thue: %.2f", thue);
//    return 0;
//}
//--------------------------
//btvn3
//int main() {
//    float toan, ly, hoa;
//    int hs_toan, hs_ly, hs_hoa;
//    float diem_tb;
//    printf("Nhap diem Toan: ");
//    scanf("%f", &toan);
//    printf("Nhap he so Toan: ");
//    scanf("%d", &hs_toan);
//    printf("Nhap diem Ly: ");
//    scanf("%f", &ly);
//    printf("Nhap he so Ly: ");
//    scanf("%d", &hs_ly);
//    printf("Nhap diem Hoa: ");
//    scanf("%f", &hoa);
//    printf("Nhap he so Hoa: ");
//    scanf("%d", &hs_hoa);
//    diem_tb = (toan * hs_toan + ly * hs_ly + hoa * hs_hoa) / (hs_toan + hs_ly + hs_hoa);
//    printf("Diem trung binh: %.2f", diem_tb);
//    return 0;
//}
//------------------------------
//btvn4
//#include <math.h>
//int main() {
//    int cd, cr;
//    float dt, cv;
//    float dc;
//    printf("Nhap chieu dai: ");
//    scanf("%d", &cd);
//    printf("Nhap chieu rong: ");
//    scanf("%d", &cr);
//    dt = cd * cr;
//    cv = 2 * (cd + cr);
//    dc = sqrt(cd * cd + cr * cr);
//    printf("Dien tich hinh chu nhat: %f\n", dt);
//    printf("Chu vi hinh chu nhat: %f\n", cv);
//    printf("Do dai duong cheo: %.2f", dc);
//    return 0;
//}
//-----------------------------
//btvn5
//int main() {
//    char c;
//    printf("Nhap mot ky tu: ");
//    scanf("%c", &c);
//    if (c >= 'A' && c <= 'Z') {
//        printf("Ky tu in hoa\n");
//    }
//    else if (c >= 'a' && c <= 'z') {
//        printf("Ky tu thuong\n");
//    }
//    else {
//        printf("Ky tu khac\n");
//    }
//    return 0;
//}
//------------------------
//btvn6
//int main() {
//    char c;
//    printf("Nhap mot ky tu: ");
//    scanf("%c", &c);
//    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
//        printf("Ky tu thuoc 26 chu cai tieng anh\n");
//    }
//    else {
//        printf("Ky tu ko thuoc 26 chu cai tieng anh");
//    }
//    return 0;
//}
//-----------------------------
//btvn7
//int main() {
//    int a, b;
//    float x;
//    printf("Nhap he so a (a khac 0): ");
//    scanf("%d", &a);
//    if (a == 0) {
//        printf("a phai khac 0\n");
//        return 1;
//    }
//    printf("Nhap he so b: ");
//    scanf("%d", &b);
//    x = -(float)b / a;
//    printf("Nghiem phuong trinh la: %.2f", x);
//    return 0;
//}
//----------------------
//btvn8
//int main() {
//    int a, b;
//    printf("Nhap so thu nhat: ");
//    scanf("%d", &a);
//    printf("Nhap so thu hai: ");
//    scanf("%d", &b);
//    if (a > b) {
//        printf("Gia tri lon nhat: %d\n", a);
//        printf("Gia tri nho nhat: %d\n", b);
//    }
//    else {
//        printf("Gia tri lon nhat: %d\n", b);
//        printf("Gia tri nho nhat: %d\n", a);
//    }
//    return 0;
//}
//---------------------------
//btvn9
//int main() {
//    int a, b, c;
//    int max, min;
//    printf("Nhap so thu nhat: ");
//    scanf("%d", &a);
//    printf("Nhap so thu hai: ");
//    scanf("%d", &b);
//    printf("Nhap so thu ba: ");
//    scanf("%d", &c);
//    max = a;
//    if (b > max)
//        max = b;
//    if (c > max)
//        max = c;
//    min = a;
//    if (b < min)
//        min = b;
//    if (c < min)
//        min = c;
//    printf("Gia tri lon nhat: %d\n", max);
//    printf("Gia tri nho nhat: %d", min);
//    return 0;
//-------------------------------
//btvn10
int main() {
    int i = 3;
    int kq;
    printf("Gia tri cua i la %d\n", i);
    kq = 20 + ++i + i++;
    printf("Bieu thuc 20 + ++i + i++ co ket qua la: %d; i = %d\n", kq, i);
    return 0;
}
