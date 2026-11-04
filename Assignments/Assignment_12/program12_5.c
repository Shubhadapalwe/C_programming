/* Marvellous Infosystems - Logic Building Assignment 12, Question 5
   Count digits less than 6.
*/
#include <stdio.h>

int Count(int iNo)
{
    unsigned int n = (unsigned int)iNo;
    int iCount = 0;
    if(iNo < 0)
    {
        n = 0u - n;
    }
    do
    {
        if(n % 10u < 6u)
        {
            iCount++;
        }
        n /= 10u;
    }while(n != 0u);
    return iCount;
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
    printf("%d\n", Count(iValue));
    return 0;
}
