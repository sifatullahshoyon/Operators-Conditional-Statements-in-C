// Take a number from user and check if its a positive or negative number.

#include <stdio.h>
int main()
{

    double num;

    scanf("%lf", &num);

    if (num < 0.0)
    {

        printf("You entered a negative number.");
    }
    else if (num > 0.0)
    {

        printf("You entered a positive number.");
    }
    else
    {

        printf("You entered 0.");
    }

    return 0;
}