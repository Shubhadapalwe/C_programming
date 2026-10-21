#include <stdio.h>

/* Display even positive factors excluding the number itself. */
void DisplayEvenFactor(int iNo)
{
    long long n = iNo;
    if (n < 0) n = -n;
    if (n == 0) return;
    for (long long i = 2; i <= n / 2; i += 2)
        if (n % i == 0) printf("%lld ", i);
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number\n");
    if (scanf("%d", &iValue) != 1) return 1;
    DisplayEvenFactor(iValue);
    return 0;
}
