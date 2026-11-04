#include <stdio.h>

/* Assignment 11 - Question 2: Display even numbers in a range */
void RangeDisplayEven(int iStart, int iEnd)
{
    if (iStart > iEnd) { printf("Invalid range\n"); return; }
    for (int i = iStart; i <= iEnd; i++) if (i % 2 == 0) printf("%d ", i);
    printf("\n");
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point: ");
    if (scanf("%d", &iValue1) != 1) return 1;
    printf("Enter ending point: ");
    if (scanf("%d", &iValue2) != 1) return 1;
    RangeDisplayEven(iValue1, iValue2);
    return 0;
}
