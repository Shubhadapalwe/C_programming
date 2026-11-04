# Marvellous Infosystems — Logic Building Assignment 11

**Language:** C  
**Total Programs:** 5  
**Topic:** Range-based logic building using loops and conditions

## Assignment Questions

| Question | Source file | Function | Description |
|---|---|---|---|
| 1 | `program11_1.c` | `RangeDisplay(int iStart, int iEnd)` | Display all numbers in a range |
| 2 | `program11_2.c` | `RangeDisplayEven(int iStart, int iEnd)` | Display even numbers in a range |
| 3 | `program11_3.c` | `RangeSum(int iStart, int iEnd)` | Sum all numbers in a positive range |
| 4 | `program11_4.c` | `RangeSumEven(int iStart, int iEnd)` | Sum even numbers in a positive range |
| 5 | `program11_5.c` | `RangeDisplayRev(int iStart, int iEnd)` | Display numbers in a range in reverse order |

## Expected examples (from the assignment)

1. **Range display:** `23 35` → `23 24 25 26 27 28 29 30 31 32 33 34 35`
2. **Even range display:** `23 35` → `24 26 28 30 32 34`
3. **Range sum:** `23 30` → `212`
4. **Even range sum:** `23 30` → `108`
5. **Reverse range display:** `23 35` → `35 34 33 32 31 30 29 28 27 26 25 24 23`

For reversed endpoints, programs print `Invalid range`. Questions 3 and 4 also reject nonpositive endpoints, as required in the assignment.

## Compile and run

From the `Assignment_11` directory:

```bash
gcc -std=c11 -Wall -Wextra program11_1.c -o program11_1
./program11_1
```

Replace `1` with `2`, `3`, `4`, or `5` to run another question.

**Note:** Each program is independent and contains its own `main()` function.
