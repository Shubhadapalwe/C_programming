# Logic Building Assignment 9

**Institute:** Marvellous Infosystems  
**Language:** C  
**Programs:** 5

## Questions

| Program | Problem | Function |
| --- | --- | --- |
| 1 | Display star and hash pattern | `Display()` |
| 2 | Convert USD to INR at 70 rupees per dollar | `DollarToINR()` |
| 3 | Calculate even factorial | `EvenFactorial()` |
| 4 | Calculate odd factorial | `OddFactorial()` |
| 5 | Difference between even factorial and odd factorial | `FactorialDiff()` |

## How to Compile and Run

```bash
gcc program9_1.c -o program9_1
./program9_1
```

Repeat with `program9_2.c` through `program9_5.c`.

## Sample Results

- Q1: Input `5` → five `*` followed by five `#`.
- Q2: Input `10` → `700` INR.
- Q3: Input `10` → `3840`.
- Q4: Input `10` → `945`.
- Q5: Input `10` → `2895`.

**Notes:** Negative inputs are treated by their absolute value for factorials and the pattern. The assignment uses integer return values; very large factorials can overflow, and the factorial functions return `0` when overflow is detected.
