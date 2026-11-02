# Logic Building Assignment 7 - C Programming

Marvellous Infosystems logic-building exercises. Each question is implemented as a separate C program with its own `main()` and the function specified in the assignment.

| File | Description | Function | Example |
| --- | --- | --- | --- |
| `program7_1.c` | Print alternating `$` and `*` symbols, N pairs | `Pattern` | `5` → `$ * $ * $ * $ * $ *` |
| `program7_2.c` | Print numbers from 1 to N | `Display` | `8` → `1 2 3 4 5 6 7 8` |
| `program7_3.c` | Print integers from -N to +N | `Display` | `4` → `-4 -3 -2 -1 0 1 2 3 4` |
| `program7_4.c` | Print positive odd numbers up to N | `OddDisplay` | `18` → `1 3 5 7 9 11 13 15 17` |
| `program7_5.c` | Print the first five multiples of N | `MultipleDisplay` | `4` → `4 8 12 16 20` |

## Compile and run

```bash
clang -std=c11 -Wall -Wextra program7_1.c -o program7_1
./program7_1
```

Replace `program7_1` with the program number you want to run. Compile each file separately because each contains its own `main()` function.

## Notes

- Program 1 uses the absolute value of N to match the provided negative-input example.
- Program 3 prints from `-abs(N)` to `+abs(N)`.
- Program 4 prints all positive odd numbers up to N; for input `18`, this includes `15` and `17`, although the assignment's displayed sample stops at `13`.
- All programs use a separate service function and a `main()` function, as shown in the supplied assignment.
