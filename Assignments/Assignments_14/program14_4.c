#include <stdio.h>

/* Assignment 14 - Program 4: Sum of non-factors */
int SumNonFact(int iNo)
{
    int sum = 0;
    if (iNo < 0) iNo = -iNo;
    for (int i = 1; i < iNo; i++) {
        if (iNo % i != 0) sum += i;
    }
    return sum;
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    printf("%d\n", SumNonFact(iValue));
    return 0;
}
