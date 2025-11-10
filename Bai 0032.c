#include<stdio.h>

int main(){
    double An,Binh;
    scanf("%lf",&An);
    scanf("%lf",&Binh);
    if(An < Binh) printf("An nhanh hon");
    if(An > Binh) printf("Binh nhanh hon");
    if(An == Binh)printf("Bang nhau");
}