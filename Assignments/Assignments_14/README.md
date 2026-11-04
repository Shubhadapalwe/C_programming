# Marvellous Infosystems — Logic Building Assignment 14

**Language:** C  
**Total programs:** 5

| File | Question | Sample |
|---|---|---|
| `program14_1.c` | Multiplication of proper factors | 12 → 144; 13 → 1; 10 → 10 |
| `program14_2.c` | Display proper factors in decreasing order | 12 → 6 4 3 2 1; 13 → 1 |
| `program14_3.c` | Display non-factors | 12 → 5 7 8 9 10 11 |
| `program14_4.c` | Sum of non-factors | 12 → 50; 10 → 37 |
| `program14_5.c` | Difference: sum of factors minus sum of non-factors | 12 → -34; 10 → -29 |

## Compile and run

```bash
gcc -Wall -Wextra -std=c11 program14_1.c -o program14_1
./program14_1
```

Replace `1` with `2`, `3`, `4`, or `5` for the other programs.

**Note:** As in the assignment examples, factors exclude the number itself (proper factors). The program treats negative input by its absolute value.
