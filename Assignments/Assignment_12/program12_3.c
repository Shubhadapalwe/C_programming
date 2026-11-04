/* Marvellous Infosystems - Logic Building Assignment 12, Question 3
   Count occurrences of digit 2.
*/
#include <stdio.h>

int CountTwo(int iNo)
{
    unsigned int n = (unsigned int)iNo;
    int iCount = 0;
    if(iNo < 0)
    {
        n = 0u - n;
    }
    do
    {
        if(n % 10u == 2u)
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
    printf("%d\n", CountTwo(iValue));
    return 0;
}
