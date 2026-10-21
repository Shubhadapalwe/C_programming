#include <stdio.h>

/* Print the first iNo positive even numbers. */
void PrintEven(int iNo)
{
    if (iNo <= 0) return;
    for (int i = 1; i <= iNo; i++)
        printf("%d ", 2 * i);
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number\n");
    if (scanf("%d", &iValue) != 1) return 1;
    PrintEven(iValue);
    return 0;
}
