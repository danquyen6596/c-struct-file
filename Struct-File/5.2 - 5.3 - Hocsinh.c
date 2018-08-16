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
	char Ten[30];
	char Lop[5];
	float Toan, Ly, Hoa, TDiem, DTB;

}Hocsinh;

void NhapmangHS(Hocsinh HS[N], int *n);
void XuatmangHS(Hocsinh HS[N], int *n);
void Sapxep(Hocsinh HS[N], int *n);
void MangsauSX(Hocsinh HS[N], int *n);
void Timkiem(Hocsinh HS[N], int *n);
void Xeploai(Hocsinh HS[N], int *n);


int main()

{	
	Hocsinh HS[N];
	int n;
	NhapmangHS(HS,&n);
	system("cls");
	XuatmangHS(HS,&n);
	Sapxep(HS,&n);
	MangsauSX(HS,&n);
	Timkiem(HS,&n);
	Xeploai(HS,&n);
	
	
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}

void NhapmangHS(Hocsinh HS[N], int *n)
{
	printf("Nhap vao so hoc sinh: ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++)
		{
			fflush(stdin);
			printf("\nNhap vao ten HS thu %d: ", i+1);
			gets(HS[i].Ten); 
			printf("Nhap vao ten lop: ");
			gets(HS[i].Lop);
			printf("Nhap vao diem Toan: ");
			scanf("%f", &HS[i].Toan);
			printf("Nhap vao diem Ly: ");
			scanf("%f", &HS[i].Ly);
			printf("Nhap vao diem Hoa: ");
			scanf("%f", &HS[i].Hoa);
			
			HS[i].TDiem=(HS[i].Toan + HS[i].Ly + HS[i].Hoa);
			HS[i].DTB=(HS[i].Toan + HS[i].Ly + HS[i].Hoa)/3;
		}
	
}


void XuatmangHS(Hocsinh HS[N], int *n)
{
	printf("\n______Danh sach hoc sinh vua nhap vao la:______\n");
	printf(" %-6s %-30s %-6s %-6s %-6s %-6s\n","STT", "Ho Ten", "Lop", "Toan", "Ly", "Hoa");
	int i;
	for(i=0; i<*n; i++)
		{
			printf(" %-6d %-30s %-6s %-6.1f %-6.1f %-6.1f\n",i+1, HS[i].Ten,HS[i].Lop, HS[i].Toan, HS[i].Ly, HS[i].Hoa);

		}
}

void Sapxep(Hocsinh HS[N], int *n)
{
	Hocsinh temp;
	int i,j;
	for(i=0; i<*n-1; i++)
		for(j=i+1; j<*n; j++)
				if(HS[i].TDiem<HS[j].TDiem)
					{
						temp=HS[i];
						HS[i]=HS[j];
						HS[j]=temp;
					}	
}

void MangsauSX(Hocsinh HS[N], int *n)
{
	printf("\n______Danh sach hoc sinh sau khi sap xep theo Tong diem la:______\n");
	printf(" %-6s %-30s %-6s %-6s\n","STT", "Ho ten", "Lop",  "Tong Diem");
	int i;
	for(i=0; i<*n; i++)
		{
			printf(" %-6d %-30s %-6s %-6.2f\n", i+1, HS[i].Ten, HS[i].Lop, HS[i].TDiem);
		}
}


void Timkiem(Hocsinh HS[N], int *n)
{
	int i, j=1;
	printf("\n_____Sinh vien co tong diem lon hon 15 la:______\n");
	printf(" %-6s %-30s %-6s %-6s\n","STT", "Ho ten", "Lop", "Tong Diem");
	for(i=0; i<*n; i++)
		{
			if(HS[i].TDiem>15)
			{
				printf(" %-6d %-30s %-6s %-6.2f\n",j, HS[i].Ten, HS[i].Lop, HS[i].TDiem);
				j++;
			}
		}
	
}

void Xeploai(Hocsinh HS[N], int *n)
{
	int i;
	printf("\n______Danh sach xep loai hoc sinh la:______\n");
	printf(" %-6s %-30s %-6s %-6s %-6s\n","STT", "Ho ten", "Lop", "DTB", "Xep loai");
	for(i=0; i<*n; i++)
		{
			if(HS[i].DTB>=8)
				printf(" %-6d %-30s %-6s %-6.2f %-6s\n",i+1, HS[i].Ten, HS[i].Lop, HS[i].DTB, "Gioi");
			else
				if(HS[i].DTB>=7&&HS[i].DTB<8)
					printf(" %-6d %-30s %-6s %-6.2f %-6s\n",i+1, HS[i].Ten, HS[i].Lop, HS[i].DTB, "Kha");
				else
					if(HS[i].DTB>=5&&HS[i].DTB<7)
						printf(" %-6d %-30s %-6s %-6.2f %-6s\n",i+1, HS[i].Ten, HS[i].Lop, HS[i].DTB, "Trung Binh");
					else
							printf(" %-6d %-30s %-6s %-6.2f %-6s\n",i+1, HS[i].Ten, HS[i].Lop, HS[i].DTB, "Yeu");
		}
	
}
