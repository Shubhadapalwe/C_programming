#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    int greatest = iFirst;
    if (iSecond > greatest) greatest = iSecond;
    if (iThird > greatest) greatest = iThird;
    printf("%d is Greatest\n", greatest);
}

int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return EXIT_FAILURE;
    FindGreatest(a, b, c);
    return EXIT_SUCCESS;
}
