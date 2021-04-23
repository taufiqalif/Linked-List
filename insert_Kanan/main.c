#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void BUAT_SIMPUL(int X);
void AWAL();
void CETAK();
void InsertKanan();


struct Node{
 int INFO;
 struct Node *LINK;
};
typedef struct Node Simpul;
Simpul *P, *FIRST, *LAST, *Q;
int X;

int main()
{int A[7]={25,12,17,10,15,5,14};
int I;
FIRST = NULL;
I=0;
X=A[I];
BUAT_SIMPUL(X);
AWAL();

for(I=1;I<=6;I++)
{
 X=A[I];
 BUAT_SIMPUL(X);
 InsertKanan();
}
printf("\nIsi sebelum Insert Kanan : ");
CETAK();
X=100;
BUAT_SIMPUL(X);
InsertKanan();
printf("\nIsi sesudah Insert Kanan : ");
CETAK();
}
void BUAT_SIMPUL(int X)
{ P=(Simpul*) malloc(sizeof(Simpul));
if(P !=NULL)
{ P->INFO=X;}
else
{printf("Pembuatan Simpul Gagal");
getch();
exit(1);}
}
void AWAL()
{FIRST=P;
LAST=P;
P->LINK=NULL;
}
void InsertKanan()
{LAST->LINK=P;
LAST=P;
P->LINK=NULL;
}

void CETAK()
{
 int X;
 Q=FIRST;
 while(Q !=NULL)
 {X=Q->INFO;
 printf("%i ",X);
 Q=Q->LINK;}
}
