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

void NhapmangSV(SinhVien SV[N], int *n);
void XuatmangSV(SinhVien SV[N], int *n);
void Sapxep(SinhVien SV[N], int *n);
void MangsauSX(SinhVien SV[N], int *n);

int main()
{	
	SinhVien SV[N];
	int n;
	
	NhapmangSV(SV, &n);
	system("cls");
	XuatmangSV(SV, &n);
	Sapxep(SV, &n);
	MangsauSX(SV, &n);

	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}

void NhapmangSV(SinhVien SV[N], int *n)
{
	printf("Nhap vao so sinh vien: ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++)
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
	
}


void XuatmangSV(SinhVien SV[N], int *n)
{
	printf("______Diem TB tung sinh vien chua sap xep la:______\n");
	printf(" %-6s %-30s %-6s\n","STT", "Ho ten", "DTB");
	int i;
	for(i=0; i<*n; i++)
		{
			printf(" %-6d %-30s %-6.2f\n", i+1, SV[i].Hoten, SV[i].TB);
		}
}

	
void Sapxep(SinhVien SV[N], int *n)
{
	SinhVien temp;
	int i,j;
	for(i=0; i<*n-1; i++)
		for(j=i+1; j<*n; j++)
				if(SV[i].TB>SV[j].TB)
					{
						temp=SV[i];
						SV[i]=SV[j];
						SV[j]=temp;
					}	
}
	
	
void MangsauSX(SinhVien SV[N], int *n)
{
	printf("______Diem TB tung sinh vien sau khi sap xep la:______\n");
	printf(" %-6s %-30s %-6s\n","STT", "Ho ten", "DTB");
	int i;
	for(i=0; i<*n; i++)
		{
			printf(" %-6d %-30s %-6.2f\n", i+1, SV[i].Hoten, SV[i].TB);
		}
}

