#include<stdio.h>
#include<math.h>

int main(){
    int a,b,n=1;
    scanf("%d %d",&a,&b);
    while ((a*pow((1+0.02),n)) < b){
        n++;
    }
    printf("%d",n);

    return 0;
}