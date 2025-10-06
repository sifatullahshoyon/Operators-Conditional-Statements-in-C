#include<stdio.h>
int main(){
    int num1 = 25;
    int num2 = 10;
    // sum operation summation
    int sum = num1 + num2;
    printf("summation = %d\n" , sum);
    // subtraction
    int sub = num1 - num2;
    printf("Subtraction = %d\n" , sub);
    // multiplication
    int mul = num1 * num2;
    printf("multiplication = %d\n", mul);
    // division
    int div = num1 / num2;
    printf("division = %d\n", div);

    float a = 15; // ভাগ করলে যদি দশিমিক আসে তাহলে C Compiler automatic দশমিক এর পরের সংখ্যা বাদ দিয়ে দেয় এই সমস্যার সমাধান হিসাবে একটি নম্বরকে Float নম্বার এ কনভার্ট করতে হয়।
    int b = 2;
    float division = a / b;
    printf("Division 2 = %f\n" , division);

    return 0;
}