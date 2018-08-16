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



void main()
{	
	SinhVien SV[N];
	int n,i;
	FILE *sv;
	printf("Nhap vao so sinh vien: ");
	scanf("%d", &n);
	sv=fopen("Sinhvien.txt","wb"); //Mo, tao moi tep
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
			
			fwrite(&SV[i],sizeof(SinhVien),n,sv); // Ghi khoi du lieu vao tep sv
		}
		
	fclose(sv);


	getch();
		
}


