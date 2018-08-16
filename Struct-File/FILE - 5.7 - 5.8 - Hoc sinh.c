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
	float Diem;

}Hocsinh;

void NhapTTHS(Hocsinh HS[N], int *n);
void XuatTTHS(Hocsinh HS[N], int *n);
void Sapxep(Hocsinh HS[N], int *n);

int main()

{
	int n, i;
	Hocsinh HS[N];
	Hocsinh HS2[N];
	
	NhapTTHS(HS, &n);
	system("cls");
	XuatTTHS(HS, &n);
	FILE *Hs;
	Hs=fopen("DSHS.txt","w");
	for(i=0; i<n; i++)
			fprintf(Hs,"%s%f\n",HS[i].Ten, HS[i].Diem);
			
	fclose(Hs);
	Hs=fopen("DSHS.txt","r");
//	fscanf(Hs,"%s%f", HS[i].Ten,);	
//	fscanf(Hs,"%f", HS[i].Diem);	
	for(i=0; i<n; i++)
		{
			fscanf(Hs,"%s",&HS2[i].Ten);
		//	fscanf(Hs,"%f",&HS2[i].Diem);
		}
		
	fclose(Hs);
//	printf("\nDanh sach hoc sinh sau khi sap xep theo diem tang dan:\n\n");
	Sapxep(HS2, &n);
	XuatTTHS(HS2, &n);
	

	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}

void NhapTTHS(Hocsinh HS[N], int *n){
	printf("Nhap vao so hoc sinh: ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++)
		{
			printf("Nhap vao thong tin hoc sinh thu %d:\n", i+1);
			fflush(stdin);
			printf("Nhap vao ten cua hoc sinh: ");
			gets(HS[i].Ten);
			printf("Nhap vao diem cua hoc sinh: ");
			scanf("%f",&HS[i].Diem);
			printf("__________________________________________\n");
		}
	
}


void XuatTTHS(Hocsinh HS[N], int *n){
	int i;
	printf("______DANH SACH HOC SINH______\n");
	printf("%-6s %-30s %-6s\n", "STT", "Ho Ten", "Diem");
	for(i=0; i<*n; i++)
		{
			printf("%-6d %-30s %-6.2f\n", i+1, HS[i].Ten, HS[i].Diem);
		}
}


void Sapxep(Hocsinh HS[N], int *n){
	int i,j;
	Hocsinh temp;
	for(i=0; i<*n; i++)
		for(j=0; j<*n; j++)
			{
				if(HS[i].Diem>HS[j].Diem);
					temp=HS[i];
					HS[i]=HS[j];
					HS[j]=temp;
			}
}

