#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////
// Function Name : ChkEven
// Description   : Checks whether the integer is even
// Input         : Integer
// Output        : Boolean
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    return FALSE;
}

//////////////////////////////////////////////////////
// Function Name : main
// Description   : Entry point of the program
// Input         : None
// Output        : Integer status code
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number: ");
    if(scanf("%d", &iValue) != 1) return 1;
    bRet = ChkEven(iValue);
    if(bRet == TRUE)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;
}
