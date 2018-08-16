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
	char Hoten[30];
	float Toan, Ly, Hoa, TB;

}SinhVien;

SinhVien SV[N];

int main()
{	
	int n,i;
	printf("Nhap vao so sinh vien: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		{
			fflush(stdin);
			printf("\nNhap vao ten SV thu %d: ", i+1);
			gets(SV[i].Hoten); 
			printf("Nhap vao diem Toan: ");
			scanf("%f", &SV[i].Toan);
			printf("Nhap vao diem Ly: ");
			scanf("%f", &SV[i].Ly);
			printf("Nhap vao diem Hoa: ");
			scanf("%f", &SV[i].Hoa);
			
			SV[i].TB=(SV[i].Toan + SV[i].Ly + SV[i].Hoa)/3;
		}
	system("cls");
	printf("_________Diem TB tung sinh vien la:_________\n");
	printf(" %-6s %-30s %-6s\n","STT", "Ho ten", "DTB");

	for(i=0; i<n; i++)
		{
			printf(" %-6d %-30s %-6.2f\n", i+1, SV[i].Hoten, SV[i].TB);
		}
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


