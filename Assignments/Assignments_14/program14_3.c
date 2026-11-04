#include <stdio.h>

/* Assignment 14 - Program 3: Display non-factors */
void NonFact(int iNo)
{
    if (iNo < 0) iNo = -iNo;
    for (int i = 1; i < iNo; i++) {
        if (iNo % i != 0) printf("%d ", i);
    }
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    NonFact(iValue);
    return 0;
}
