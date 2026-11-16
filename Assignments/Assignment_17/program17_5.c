#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", i + j - 1);
        }
        printf("\n");
    }
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    if(scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    if(iValue1 <= 0 || iValue2 <= 0)
    {
        printf("Rows and columns must be positive\n");
        return 1;
    }

    Pattern(iValue1, iValue2);

    return 0;
}
