# Marvellous Infosystems — Logic Building Assignment 12

**Language:** C  
**Total programs:** 5

## Assignment Questions

1. **Display digits in reverse order, one digit per line.** — `DisplayDigit()` — `program12_1.c`
2. **Check whether the number contains digit zero.** — `ChkZero()` — `program12_2.c`
3. **Count occurrences of digit 2.** — `CountTwo()` — `program12_3.c`
4. **Count occurrences of digit 4.** — `CountFour()` — `program12_4.c`
5. **Count digits less than 6.** — `Count()` — `program12_5.c`

## Compile and Run

Run each program separately from this folder:

```bash
gcc -std=c11 -Wall -Wextra -pedantic program12_1.c -o program12_1
./program12_1
```

Replace `1` with `2`, `3`, `4`, or `5` for the other questions.

## Sample Test Cases

| Program | Input | Expected output |
|---|---:|---|
| 1 | 2395 | `5`, `9`, `3`, `2` (on separate lines) |
| 1 | 9000 | `0`, `0`, `0`, `9` (on separate lines) |
| 2 | 2395 | `There is no Zero` |
| 2 | 1018 | `It Contains Zero` |
| 3 | 922432 | `3` |
| 4 | 9440 | `2` |
| 5 | 2395 | `3` |
| 5 | 96672 | `1` |

Negative inputs are handled by examining their digits without the minus sign. Input `0` is treated as a single digit zero. Programs use integer arithmetic (modulo and division) rather than string conversion.
