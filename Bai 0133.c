#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
        
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(*(p+i)==x){
            printf("Yes\n");
            printf("%d",i);
            break;
        }
        if(i==n-1 && *(p+i)!=x){
            printf("No");
        }
    }
    return 0;
}