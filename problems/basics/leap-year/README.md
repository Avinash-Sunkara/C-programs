# Leap year

## Problem

Read a positive year. Print whether it is a Gregorian leap year.

## Example

Input:

```text
2000
```

Output:

```text
Leap year
```

## Approach

Check divisibility by 400, or by 4 but not 100.

## Complexity

O(1).

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic leap_year.c -o leap_year`. Run the executable and provide input in the format above. The solution uses standard input and output.
