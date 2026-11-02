#include <stdio.h>

double CircleArea(float fRadius)
{
    return 3.14 * fRadius * fRadius;
}

int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    if (scanf("%f", &fValue) != 1) return 1;

    dRet = CircleArea(fValue);
    printf("Area of circle is %f\n", dRet);
    return 0;
}
