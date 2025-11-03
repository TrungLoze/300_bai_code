#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    float P = (float)(21*a*a + 5*b*b)/(2009*c*c + 15);
    float Q = (float)(pow((a*a-2*b),0.5))/(3*c*c+4);
    printf("%0.4f %0.4f", P,Q);
    return 0;
}