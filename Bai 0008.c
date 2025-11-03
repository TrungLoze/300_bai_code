#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int P = 21*a + 5*b - 2009;
    float Q = (float)(21*a*a-5*b)/(2009*b*b);
    float R=(float)(21*a+5*b*b)/(2009*b+15);
    printf("%d %0.4f\n%0.6f", P,Q,R);
    return 0;
}