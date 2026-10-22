// Assignment 6 - Calculate Shopping Discount
#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f, fFinalAmount = 0.0f;
    if (fAmount < 0) { printf("Invalid Amount\n"); return; }
    if (fAmount >= 5000) fDiscount = 20.0f;
    else if (fAmount >= 1000) fDiscount = 10.0f;
    fFinalAmount = fAmount * (1.0f - fDiscount / 100.0f);
    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main(void)
{
    float fAmount = 0.0f;
    printf("Enter purchase amount: ");
    if (scanf("%f", &fAmount) != 1) return EXIT_FAILURE;
    CalculateDiscount(fAmount);
    return EXIT_SUCCESS;
}
