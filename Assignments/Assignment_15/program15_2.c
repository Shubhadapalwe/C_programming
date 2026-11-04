#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return TRUE;
    }
    return FALSE;
}

int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Please enter number: ");
    if (scanf("%d", &iValue) != 1) return 1;
    bRet = ChkGreater(iValue);
    if (bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return 0;
}
