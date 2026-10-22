#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("Given number is Even Number\n");
    }
    else
    {
        printf("Given number is Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}