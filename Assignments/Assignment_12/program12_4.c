/* Marvellous Infosystems - Logic Building Assignment 12, Question 4
   Count occurrences of digit 4.
*/
#include <stdio.h>

int CountFour(int iNo)
{
    unsigned int n = (unsigned int)iNo;
    int iCount = 0;
    if(iNo < 0)
    {
        n = 0u - n;
    }
    do
    {
        if(n % 10u == 4u)
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
    printf("%d\n", CountFour(iValue));
    return 0;
}
