#include<stdio.h>
int main()
{
    int suhu=0;
    printf("Menentukan bentuk suatu zat (beku atau cair)\n");
    printf("===============================================\n");
    printf("Masukan Suhu pada Zat (Celcius) : ");
    scanf("%d", &suhu);
    if (suhu<0){
        printf("\nBentuk Zat tersebut adalah beku\n");
    }else if(suhu>0&suhu<=100){
    printf("\nBentuk Zat tersebut adalah cair\n");}
    else if(suhu>100){
        printf("\nBentuk Zat tersebut adalah gas\n");
    }
}
