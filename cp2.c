// Take a number from user and check if its a even number or odd number.
#include<stdio.h>
int main(){

    int number;
    // take input
    scanf("%d" , &number);
    // condition
    if(number % 2 == 0){
        printf("even number");
    } else{
        printf("odd number");
    }

    return 0;
}