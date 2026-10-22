// Assignment 6 - Check Admission Eligibility
#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks < 0 || fMarks > 100 || iAge < 0) { printf("Invalid Input\n"); return; }
    if (fMarks >= 60 && iAge >= 17) printf("Eligible for Admission\n");
    else printf("Not Eligible\n");
}

int main(void)
{
    float fMarks = 0.0f; int iAge = 0;
    printf("Enter marks and age: ");
    if (scanf("%f %d", &fMarks, &iAge) != 2) return EXIT_FAILURE;
    CheckAdmission(fMarks, iAge);
    return EXIT_SUCCESS;
}
