# Marvellous Infosystems – Logic Building Assignment 13

**Language:** C  
**Total programs:** 5

## Questions

1. **CountEven** — Count even digits. (`program13_1.c`)
2. **CountOdd** — Count odd digits. (`program13_2.c`)
3. **CountRange** — Count digits between 3 and 7 (exclusive). (`program13_3.c`)
4. **MultDigits** — Multiply all digits. (`program13_4.c`)
5. **CountDiff** — Difference between sum of even digits and sum of odd digits. (`program13_5.c`)

## Compile and run

```bash
gcc -Wall -Wextra -std=c11 program13_1.c -o program13_1
./program13_1
```

Replace `1` with the required program number (1–5).

## Sample checks

| Program | Input | Expected output |
|---|---:|---:|
| 1 | 8462 | 4 |
| 2 | 2395 | 3 |
| 3 | 4521 | 2 |
| 4 | 2395 | 270 |
| 5 | 2395 | -15 |

**Note:** Multiplication uses `int` as specified by the assignment; very large inputs may overflow the result.
