// Assignment 6 - Calculate Electricity Bill
#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    if (iUnits < 0) { printf("Invalid Units\n"); return; }
    if (iUnits <= 100) fBill = iUnits * 5.0f;
    else if (iUnits <= 200) fBill = 500.0f + (iUnits - 100) * 7.0f;
    else fBill = 1200.0f + (iUnits - 200) * 10.0f;
    printf("Bill = %.2f\n", fBill);
}

int main(void)
{
    int iUnits = 0;
    printf("Enter consumed units: ");
    if (scanf("%d", &iUnits) != 1) return EXIT_FAILURE;
    CalculateElectricityBill(iUnits);
    return EXIT_SUCCESS;
}
