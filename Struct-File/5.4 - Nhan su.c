#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 100

typedef struct 
{
	char Ho[10];
	char Tendem[15];
	char Ten[10];

}Name;

typedef struct 
{
	int Ngay;
	int Thang;
	int Nam;

}Date;

typedef struct 
{
	Name Hoten[30];
	Date NSinh;
	char QQuan[15];
	Date NVao;
	int MLuong;

}Nhansu;

void NhapTTNS(Nhansu NS[], int *n);
void XuatTTNS(Nhansu NS[], int *n);



int main()

{	
	int n;
	Nhansu NS[N];
	NhapTTNS(NS, &n);
	XuatTTNS(NS, &n);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}

void NhapTTNS(Nhansu NS[N], int *n){
	printf("Nhap vao so nhan su: ");
	int i;
	scanf("%d", n);
	for(i=0; i<*n; i++)
		{
			printf("Nhap vao thong tin nhan su thu %d:\n",i+1);
			fflush(stdin);
			printf("Nhap vao ho ten nhan su:");
			scanf("%c %c %c",&NS[i].Hoten[30].Ho, &NS[i].Hoten[30].Tendem, &NS[i].Hoten[30].Ten);
			fflush(stdin);
			printf("Nhap vao ngay sinh: ");
			scanf("%d %d %d",&NS[i].NSinh.Ngay, &NS[i].NSinh.Thang, &NS[i].NSinh.Nam );
			fflush(stdin);
			printf("Nhap vao que quan:");
			scanf("%c",&NS[i].QQuan[15]);
			fflush(stdin);
			printf("Nhap ngay vao co quan: ");
			scanf("%d %d %d",&NS[i].NSinh.Ngay, &NS[i].NSinh.Thang, &NS[i].NSinh.Nam );
			fflush(stdin);
			printf("Nhap vao muc luong:");
			scanf("%d",&NS[i].MLuong);
		}
}	


void XuatTTNS(Nhansu NS[N], int *n){
	printf("______DANH SACH NHAN SU______\n");
	int i;
	for(i=0; i<*n; i++)
		{
			printf("___Thong tin nhan su thu %d___",i+1);
			printf("\nHo va ten: %c %c %c", NS[i].Hoten[30].Ho, &NS[i].Hoten[30].Tendem, &NS[i].Hoten[30].Ten);
			printf("\nNgay sinh: %d%d%d",NS[i].NSinh.Ngay, &NS[i].NSinh.Thang, &NS[i].NSinh.Nam);
			printf("\nQue quan: %c",NS[i].QQuan);
			printf("\nNgay vao co quan: %d %d %d",NS[i].NSinh.Ngay, &NS[i].NSinh.Thang, &NS[i].NSinh.Nam);
			printf("\nMuc luong(VND): %d",NS[i].MLuong);
			printf("\n___________________________________________");
		}
}
