#include<stdio.h>

int main(){
    int tuoi;
    scanf("%d",&tuoi);
    if(0< tuoi && tuoi <=11) printf("Thieu nhi");
    if(11<tuoi && tuoi <=25) printf("Thieu nien");
    if(25<tuoi && tuoi <=50) printf("Trung nien");
    if(tuoi > 50) printf("Lao nien");
    
}