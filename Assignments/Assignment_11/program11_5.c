#include <stdio.h>

/* Assignment 11 - Question 5: Display numbers in a range in reverse order */
void RangeDisplayRev(int iStart, int iEnd)
{
    if (iStart > iEnd) { printf("Invalid range\n"); return; }
    for (int i = iEnd; ; i--) {
        printf("%d ", i);
        if (i == iStart) break;
    }
    printf("\n");
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point: ");
    if (scanf("%d", &iValue1) != 1) return 1;
    printf("Enter ending point: ");
    if (scanf("%d", &iValue2) != 1) return 1;
    RangeDisplayRev(iValue1, iValue2);
    return 0;
}
