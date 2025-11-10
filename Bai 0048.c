#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,check=0;
    scanf("%d %d %d",&a,&b,&c);
    if((a + b > c) && (a + c > b) && (b + c > a)){
        printf("Yes\n");
        check=1;
    }else{
        printf("No");
    }

    if(check){
        if((a == b) && (b == c)){
            printf("Deu");
        }else if((a == b) || (b == c) || (c == a)){
            printf("Can");
        }else if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b)){
            printf("Vuong");
        }else{
            printf("Thuong");
        }
    }

    return 0;
}