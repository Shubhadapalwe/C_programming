# Logic Building Assignment 5 — C Programming

Five independent C programs for Marvellous Infosystems logic building practice.

| File | Task | Example |
|---|---|---|
| `program5_1.c` | Greatest of three integers (including ties) | `40 40 20` → `40 is Greatest` |
| `program5_2.c` | Leap year (Gregorian calendar; invalid years <= 0) | `2000` → `Leap Year` |
| `program5_3.c` | Grade from marks (0–100) | `85` → `Grade B` |
| `program5_4.c` | Divisibility by 3 and/or 5 | `15` → `Divisible by Both` |
| `program5_5.c` | Uppercase, lowercase, digit or special character | `A` → `Uppercase Alphabet` |

## Compile and run (macOS / Linux)

```bash
clang -std=c11 -Wall -Wextra program5_1.c -o program5_1
./program5_1
```

Replace `program5_1` with the program you want to run. Each file contains its own `main()` and service function, so compile each separately.

**Complexity:** All five programs run in O(1) time and O(1) auxiliary space.
