#include<stdio.h>
int main(){
    int tk;
    // take input
    scanf("%d",&tk);
    // condition
    if(tk>=100){
        printf("Burger Khabo\n");
    } else if(tk>=50){
        printf("Fuchka Khabo\n");
    }else if(tk>=30){
        printf("sandwich khabo\n");
    }else if(tk>=20){
        printf("Coke Khabo\n");
    }else if(tk>=10){
        printf("Jhalmuri Khabo\n");
    }else{
        printf("Kisu ei khabo na\n");
    }
}