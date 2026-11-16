#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%c\t", (iCnt2 <= iRow - iCnt1 + 1) ? '*' : '#');
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    if(scanf("%d %d", &iValue1, &iValue2) != 2 || iValue1 <= 0 || iValue2 <= 0)
    {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
