#include <stdio.h>

//////////////////////////////////////////////////////
// Function Name : Accept
// Description   : Prints the specified number of stars
// Input         : Integer
// Output        : None
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
    printf("\n");
}

//////////////////////////////////////////////////////
// Function Name : main
// Description   : Calls Accept with the value 5
// Input         : None
// Output        : Integer (exit status)
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
int main(void)
{
    int iValue = 5;
    Accept(iValue);
    return 0;
}
