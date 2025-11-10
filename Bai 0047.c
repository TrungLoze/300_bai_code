#include<stdio.h>
#include<math.h>

int checkSCP(int n){
    int check = pow(n,0.5);
    if(check * check == n) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    if(checkSCP(n)) printf("Yes");
    else printf("No");

    return 0;
}