#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    if (t<18){
        printf("Tre em\n");
        if(t <= 6){
            printf("Tre mam non");
        }else if(t<=11){
            printf("Tre tieu hoc");
        }else{
            printf("Tre trung hoc");
        }
    }else if (18 <= t && t < 60){
        printf("Nguoi truong thanh\n");
        if(t<=23){
            printf("Sinh vien");
        }else{
            printf("Nguoi di lam");
        }
    }else{
        printf("Nguoi cao tuoi\n");
        if(t<=62){
            printf("Sap nghi huu");
        }else{
            printf("Da nghi huu");
        }
    }
    return 0;
}