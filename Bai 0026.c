#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float p = (float)(a+b+c)/2;
    float s = pow((p*(p-a)*(p-b)*(p-c)),0.5);
    float r = (a*b*c)/(4*s);
    printf("%0.3f",r);
    return 0;
}