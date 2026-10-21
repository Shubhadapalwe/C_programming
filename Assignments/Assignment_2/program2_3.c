#include <stdio.h>

//////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints Hello for numbers below 10, otherwise Demo
// Input         : Integer
// Output        : None
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
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
    printf("Enter number: ");
    if(scanf("%d", &iValue) != 1) return 1;
    Display(iValue);
    return 0;
}
