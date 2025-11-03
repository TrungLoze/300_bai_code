#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int P = a/b;
    int Q = a%b;
    printf("%d %d", P,Q);
    return 0;
}