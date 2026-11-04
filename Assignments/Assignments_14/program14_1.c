#include <stdio.h>

/* Assignment 14 - Program 1: Multiplication of proper factors */
int MultFact(int iNo)
{
    int product = 1;
    if (iNo < 0) iNo = -iNo;
    for (int i = 1; i < iNo; i++) {
        if (iNo % i == 0) product *= i;
    }
    return product;
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    printf("%d\n", MultFact(iValue));
    return 0;
}
