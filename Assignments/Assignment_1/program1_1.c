#include <stdio.h>

//////////////////////////////////////////////////////
// Function Name : Divide
// Description   : Divides two integers; returns -1 if divisor is zero
// Input         : Integer, Integer
// Output        : Integer
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if (iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

//////////////////////////////////////////////////////
// Function Name : main
// Description   : Calls Divide and displays the result
// Input         : None
// Output        : Integer (exit status)
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;
    iRet = Divide(iValue1, iValue2);
    printf("Division is %d\n", iRet);
    return 0;
}
