#include <stdio.h>

int main(void)
{
    char Name[30];
    printf("Please enter full name: ");
    if (fgets(Name, sizeof(Name), stdin) == NULL)
    {
        return 1;
    }
    printf("Your name is %s", Name);
    return 0;
}
