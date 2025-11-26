//#include <stdio.h>
//#include <conio.h>
//void main() {
//	float dtb;
//	printf("Nhap diem trung binh:");
//	scanf_s("%f", &dtb);
//	if (dtb >= 4.0) {
//		printf("dau");
//	}
//	else {
//		printf("rot");
//	}
//}
//----------------
// #include<math.h>
//void main() {
//	float dtb, clo1, clo2, clo3;
//	printf("nhap diem clo1:\n");
//	scanf_s("%f", &clo1);
//	while (clo1 < 0 || clo1 > 3) {
//		printf("Sai clo1 phai thuoc 0->3 , nhap lai:\n");
//		scanf_s("%f", &clo1);
//	}
//	printf("clo1 = %f\n", clo1);
//	float dclo1 = clo1 * 10 / 3;
//	printf("nhap diem clo2:\n");
//	scanf_s("%f", &clo2);
//	while (clo2 < 0 || clo2 > 3) {
//		printf("Sai clo2 phai thuoc 0->3 , nhap lai:\n");
//		scanf_s("%f", &clo2);
//	}
//	float dclo2 = clo2 * 10 / 3;
//	printf("nhap diem clo3:\n");
//	scanf_s("%f", &clo3);
//	while (clo3 < 0 || clo3 > 4) {
//		printf("Sai clo3 phai thuoc 0->4 , nhap lai:\n");
//		scanf_s("%f", &clo3);
//	}
//	float dclo3 = clo3 * 10 / 4;
//	dtb = clo3 + clo1 + clo2;
//	printf("DTB =%f\n", dtb);
//	float min1 = fminf(dtb,dclo1);
//	float min2 = fminf(dclo2,dclo3);
//	float min3 = fminf(min2,min1);
//	if (min3 < 4)
//		printf("ROt");
//	else
//		printf("DAU");
//}
//-------------------
//baimau2
//void main() {
//	int n;
//	printf("Nhap 1 so nguyen:");
//	scanf_s("%d", &n);
//	if (n % 2 == 0)
//		printf("%d la so chan ", n);
//}
//--------------------
//baimau3
//void main() {
//	int n;
//	printf("Nhap vao 1 nam:");
//	scanf_s("%d", &n);
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		printf("%d la nam nhuan", n);
//	else
//		printf("%d la nam ko nhuan", n);
//	_getch();
//}
//------------------
//baimau4
//void main() {
//	float tl, gk, ck, dtb;
//	printf("Nhap diem tl 0->10 :\n");
//	scanf_s("%f", &tl);
//	printf("Nhap diem gk 0->10 :\n");
//	scanf_s("%f", &gk);
//	printf("Nhap diem ck 0->10:\n");
//	scanf_s("%f", &ck);
//	dtb = 0.2 * tl + 0.3 * gk + 0.5 * ck;
//	printf("DTB= %f\n", dtb);
//	if (dtb >= 8.5)
//		printf("A");
//	else
//		if (dtb >= 7.0)
//			printf("B");
//		else
//			if (dtb >= 5.5)
//				printf("C");
//			else
//				if (dtb >= 4.0)
//					printf("D");
//				else
//					if (dtb < 4)
//						printf("F");
//}
//----------------------
//baimau5
//void main() {
//	int a, b, kq = 0;
//	char pt;
//	printf("Nhap vao lan luot 2 so nguyen a va b:");
//	scanf_s("%d%d", &a, &b);
//	_flushall();
//	printf("Nhap vao 1 phep toan +, -, *, / :");
//	scanf_s(" %c", &pt);
//	switch (pt) {
//		case '+': kq = a + b;break;
//		case '-': kq = a - b;break;
//		case '*': kq = a * b;break;
//		case '/': kq = a / b;break;
//	}
//	printf("Ket qua la : a %c b = %d", pt, kq);
//}
//----------------
//baimau6
//void main() {
//	int thang;
//	printf(" Nhap vao 1 thang:");
//	scanf_s("%d", &thang);
//	switch (thang) {
//	case 1:printf("january");break;
//	case 2: printf("february");break;
//	case 3: printf("march");break;
//	case 4: printf("april");break;
//	case 5:printf("may");break;
//	case 6:printf("june");break;
//	case 7:printf("july");break;
//	case 8:printf("august");break;
//	case 9:printf("september");break;
//	case 10:printf("october");break;
//	case 11:printf("november");break;
//	case 12:printf("december");break;
//	default:
//		printf("month is invalid");
//	}
//}