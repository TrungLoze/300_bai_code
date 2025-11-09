#include<stdio.h>
void swap(int* a, int i,int j){
    int temp = a[i];
    a[i]=a[j];
    a[j]= temp;
}

void BubbleSort(int* a,int n){
    int check=0;
    for(int i=n;i>1;i--){
        check=1;
        for(int j=0; j<i-1;j++){
            if(a[j] > a[j+1]){
                swap(a,j,j+1);
                check=0;
            }
        }
        if(check) break;
    }
}

int main(){
    int t,n=0;
    int a[1000000];
    while (scanf("%d",&t)==1){
        a[n]=t;
        n++;
    }

    BubbleSort(a,n);

    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
}