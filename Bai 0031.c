#include<stdio.h>

int main(){
    double An,Binh;
    scanf("%lf",&An);
    scanf("%lf",&Binh);
    if(An > Binh) printf("An gioi hon");
    if(An < Binh) printf("Binh gioi hon");
    if(An == Binh)printf("Bang nhau");
}