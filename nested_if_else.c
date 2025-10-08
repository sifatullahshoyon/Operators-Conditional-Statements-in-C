#include<stdio.h>
int main(){
    int tk;
    // take input
    scanf("%d" , &tk);
    // Condition 
    if(tk >= 5000){
        printf("Cox's Bazar jabo\n");
        // Nested if & else
        if(tk >= 10000){
            printf("Saint Marin Jabo\n");
        }else{
            printf("Ferot Cole Asbo\n");
        }
    }else{
        printf("Kothao oh jabo na\n");
    }
    return 0;
}