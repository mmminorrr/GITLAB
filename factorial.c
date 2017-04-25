#include <stdio.h>
int main()
{
    int num, i;
    unsigned long long factorial = 1;

    printf("ENTER AN INTEGER: ");
    scanf("%d",&num);

    // show error if the user enters a negative integer
    if (num < 0)
        printf("ERROR! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=num; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", num, factorial);
    }

    return 0;
}