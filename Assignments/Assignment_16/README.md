# Marvellous Infosystems - Logic Building Assignment 16

Five independent C programs, following the assignment's `void Pattern(int iRow, int iCol)` function layout and `iValue1`/`iValue2` naming convention.

1. program16_1.c - Repeat A B C ... across every row.
2. program16_2.c - Alternate uppercase and lowercase alphabet rows.
3. program16_3.c - Print the row letter repeatedly across columns.
4. program16_4.c - Print descending row numbers across columns.
5. program16_5.c - Print consecutive numbers row by row.

Compile each independently: `gcc -std=c11 -Wall -Wextra program16_1.c -o program16_1`
Run: `./program16_1` then enter rows and columns (for example `4 4`).

For alphabet-based patterns, dimensions exceeding A-Z/a-z are rejected. All programs reject nonpositive dimensions.
