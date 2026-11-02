#include <stdio.h>
#include <stdlib.h>

void Number(int iNo)
{
    if (iNo < 50) printf("Small\n");
    else if (iNo < 100) printf("Medium\n");
    else printf("Large\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    Number(iValue);
    return EXIT_SUCCESS;
}
