#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void BUAT_SIMPUL(int X);
void AWAL();
void CETAK();
void InsertKanan();
void GeserQ(int I);
void InsertTengah();



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
printf("\nIsi sebelum Insert Tengah : ");
CETAK();

I=6;
GeserQ(I);
X=100;
BUAT_SIMPUL(X);
InsertTengah();
printf("\nIsi sesudah Insert Tengah : ");
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
void GeserQ(int J)
{
 int I;
 Q=FIRST;
 for(I=1;I<=J;J++)
 {Q=Q->LINK;}
}
void InsertTengah()
{P->LINK=Q->LINK;
Q->LINK=P;
}
void CETAK(void)
{
 int X;
 Q=FIRST;
 while(Q !=NULL)
 {X=Q->INFO;
 printf("%i ",X);
 Q=Q->LINK;}
}
