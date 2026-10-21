# Logic Building Assignment 3 — C Programming

Marvellous Infosystems logic-building exercises. Each problem is a standalone C program with a separate `main()` and the assignment's service function.

| File | Description | Function | Example |
| --- | --- | --- | --- |
| `program3_1.c` | Print the first N positive even numbers. | `PrintEven` | `7` → `2 4 6 8 10 12 14` |
| `program3_2.c` | Print positive factors other than the number itself (matching the supplied example). | `DisplayFactor` | `24` → `1 2 3 4 6 8 12` |
| `program3_3.c` | Print even positive factors other than the number itself. | `DisplayEvenFactor` | `36` → `2 4 6 12 18` |
| `program3_4.c` | Switch an English letter between uppercase and lowercase. | `DisplayConvert` | `a` → `A`, `D` → `d` |
| `program3_5.c` | Check whether an English character is a vowel. | `ChkVowel` | `E` → `It is Vowel` |

## Compile and run

```bash
clang -std=c11 -Wall -Wextra program3_1.c -o program3_1
./program3_1
```

Change `program3_1` to the desired program name for other exercises.

**Assignment wording notes:** Problem 2 says “even factors,” but its sample contains `1`, so this solution treats it as all proper positive factors. Problem 3 displays only even proper factors. For zero, factor-display programs print nothing. Negative inputs are treated by their absolute value.
