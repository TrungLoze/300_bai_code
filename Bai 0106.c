#include<stdio.h>
#include<math.h>
int checkSNT(int a){
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    
    if(checkSNT(n)){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}