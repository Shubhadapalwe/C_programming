#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 0; i < iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", 'A' + i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    if(scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    if(iValue1 <= 0 || iValue2 <= 0 || iValue1 > 26)
    {
        printf("Invalid dimensions\n");
        return 1;
    }

    Pattern(iValue1, iValue2);

    return 0;
}
