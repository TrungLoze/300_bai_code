#include<stdio.h>
#include<math.h>

int main(){
    int T,HS;
    scanf("%d %d", &T,&HS);
    int Qua = T/HS;
    int Du = T%HS;
    printf("%d %d", Qua,Du);
    return 0;
}