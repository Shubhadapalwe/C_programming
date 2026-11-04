#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    if (iTotal <= 0 || iObtained < 0 || iObtained > iTotal)
    {
        return -1.0f;
    }
    return ((float)iObtained / (float)iTotal) * 100.0f;
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;
    printf("Please enter total marks: ");
    if (scanf("%d", &iValue1) != 1) return 1;
    printf("Please enter obtained marks: ");
    if (scanf("%d", &iValue2) != 1) return 1;
    fRet = Percentage(iValue1, iValue2);
    if (fRet < 0.0f)
    {
        printf("Invalid marks\n");
        return 1;
    }
    printf("%.1f%%\n", fRet);
    return 0;
}
