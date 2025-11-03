#include<stdio.h>

int main(){
    int time;
    scanf("%d",&time);
    int gio=time/3600;
    time%=3600;
    int phut=time/60;
    time%=60;
    int giay=time%60;
    time/=60;
    printf("%d:%d:%d", gio,phut,giay);

    return 0;
}