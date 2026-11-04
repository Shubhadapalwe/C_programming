#include <stdio.h>

/* Assignment 11 - Question 1: Display all numbers in a range */
void RangeDisplay(int iStart, int iEnd)
{
    if (iStart > iEnd) { printf("Invalid range\n"); return; }
    for (int i = iStart; i <= iEnd; i++) printf("%d ", i);
    printf("\n");
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point: ");
    if (scanf("%d", &iValue1) != 1) return 1;
    printf("Enter ending point: ");
    if (scanf("%d", &iValue2) != 1) return 1;
    RangeDisplay(iValue1, iValue2);
    return 0;
}
