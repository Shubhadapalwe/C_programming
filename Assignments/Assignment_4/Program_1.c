#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iNo)
{
    if (iNo == 0)
    {
        printf("Number is Zero\n");
    }
    else if (iNo > 0)
    {
        printf("Number is Positive\n");
    }
    else
    {
        printf("Number is Negative\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}