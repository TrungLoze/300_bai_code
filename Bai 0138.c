#include<stdio.h>
#include<stdlib.h>
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
    int sum=0;
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(checkSNT(t)){
            sum+=t;
        }
    }
    printf("%d",sum);
    
    return 0;
}