#include<stdio.h>
#include<math.h>

int main(){
    int d,r;
    scanf("%d %d",&d,&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=d;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}