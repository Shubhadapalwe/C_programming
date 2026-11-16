# Marvellous Logic Building Assignment 17

Five independent C programs using the provided `void Pattern(int iRow, int iCol)` layout, Marvellous-style variable names and nested loops.

Compile: `gcc -Wall -Wextra program17_1.c -o program17_1`
Run: `./program17_1` and enter rows and columns.

1. Sequential digits wrapping after 9 (4x4: 1 2 3 4 / 5 6 7 8 / 9 1 2 3 / 4 5 6 7).
2. Odd rows even numbers; even rows odd numbers. Note: the screenshot states 4 columns but displays 5 values per row; the program respects the user-entered column count. Enter 4 5 to reproduce the displayed example.
3. Alternating rows of lowercase letters and positive integers.
4. Alternating rows of positive and negative integers.
5. Each row starts at its row number and increases across columns.

All five source files passed GCC compilation checks with -Wall -Wextra -Werror.
