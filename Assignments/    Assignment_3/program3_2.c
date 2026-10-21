#include <stdio.h>
#include <limits.h>

/* Display positive factors excluding the number itself (as in the example). */
void DisplayFactor(int iNo)
{
    long long n = iNo;
    if (n < 0) n = -n;
    if (n == 0) return;
    for (long long i = 1; i <= n / 2; i++)
        if (n % i == 0) printf("%lld ", i);
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number\n");
    if (scanf("%d", &iValue) != 1) return 1;
    DisplayFactor(iValue);
    return 0;
}
