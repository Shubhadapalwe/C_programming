#include <stdio.h>

//////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints Marvellous five times
// Input         : None
// Output        : None
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
void Display(void)
{
    int i = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
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
