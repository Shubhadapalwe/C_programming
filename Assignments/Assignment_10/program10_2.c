#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return (double)fWidth * fHeight;
}

int main(void)
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    if (scanf("%f", &fValue1) != 1) return 1;
    printf("Enter height: ");
    if (scanf("%f", &fValue2) != 1) return 1;

    dRet = RectArea(fValue1, fValue2);
    printf("Area of rectangle is %f\n", dRet);
    return 0;
}
