/* Marvellous Infosystems - Logic Building Assignment 12, Question 1
   Display digits in reverse order, one digit per line.
*/
#include <stdio.h>

void DisplayDigit(int iNo)
{
    unsigned int n = (unsigned int)iNo;
    if(iNo < 0)
    {
        n = 0u - n;
    }
    do
    {
        printf("%u\n", n % 10u);
        n /= 10u;
    }while(n != 0u);
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if(scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    DisplayDigit(iValue);
    return 0;
}
