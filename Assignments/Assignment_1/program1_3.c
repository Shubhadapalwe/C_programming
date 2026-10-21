#include <stdio.h>

//////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints numbers from 5 down to 1
// Input         : None
// Output        : None
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
void Display(void)
{
    int i = 5;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

//////////////////////////////////////////////////////
// Function Name : main
// Description   : Calls Display
// Input         : None
// Output        : Integer (exit status)
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
int main(void)
{
    Display();
    return 0;
}
