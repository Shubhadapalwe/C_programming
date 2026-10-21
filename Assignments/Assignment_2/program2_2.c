#include <stdio.h>

//////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints N stars using a decreasing counter
// Input         : Integer
// Output        : None
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("* ");
        iNo--;
    }
    printf("\n");
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
