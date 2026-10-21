#include <stdio.h>

//////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints the first integer abs(frequency) times
// Input         : Integer, Integer
// Output        : None
// Author        : Shubhada Anil Palwe
// Date          : 21/10/2026
//////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)
{
    long long i = 0;
    long long count = iFrequency;
    if(count < 0) count = -count;
    for(i = 0; i < count; i++)
    {
        printf("%d ", iNo);
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
    int iValue = 0, iCount = 0;
    printf("Enter number: ");
    if(scanf("%d", &iValue) != 1) return 1;
    printf("Enter frequency: ");
    if(scanf("%d", &iCount) != 1) return 1;
    Display(iValue, iCount);
    return 0;
}
