#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32.0) * (5.0 / 9.0);
}

int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fValue) != 1) return 1;

    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius is %f\n", dRet);
    return 0;
}
