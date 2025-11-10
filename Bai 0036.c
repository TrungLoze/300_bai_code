#include<stdio.h>

int main(){
    double HKI,HKII;
    scanf("%lf %lf",&HKI,&HKII);
    double TBCN = (HKI + HKII*2)/3;
    printf("%0.1lf\n",TBCN);
    if(TBCN <3.5) printf("Kem");
    if(3.5<=TBCN && TBCN <5) printf("Yeu");
    if(5.0<=TBCN && TBCN <6.5) printf("Trung binh");
    if(6.5<=TBCN && TBCN <8.0) printf("Kha");
    if(TBCN >= 8.0) printf("Gioi");
    
    return 0;
}