#include<stdio.h>

int main(){
    double a;
    scanf("%lf",&a);
    printf("%0.2lf",(a/(2*3.14))*(a/(2*3.14))*3.14);
    return 0;
}