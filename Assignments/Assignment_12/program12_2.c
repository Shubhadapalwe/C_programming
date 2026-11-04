/* Marvellous Infosystems - Logic Building Assignment 12, Question 2
   Check whether the number contains digit zero.
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    unsigned int n = (unsigned int)iNo;
    if(iNo < 0)
    {
        n = 0u - n;
    }
    do
    {
        if(n % 10u == 0u)
        {
            return TRUE;
        }
        n /= 10u;
    }while(n != 0u);
    return FALSE;
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
    if(ChkZero(iValue) == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}
