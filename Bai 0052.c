#include<stdio.h>

int main(){
    int d;
    scanf("%d",&d);
    if (d>=80){
        printf("Loai A\n");
        if(d>=90){
            printf("Xuat sac");
        }else{
            printf("Gioi");
        }
    }else if (50 <= d && d < 80){
        printf("Loai B\n");
        if(d>=65){
            printf("Kha");
        }else{
            printf("Trung binh");
        }
    }else{
        printf("Loai C\n");
        if(d>=35){
            printf("Yeu");
        }else{
            printf("Kem");
        }
    }
    return 0;
}