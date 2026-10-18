# Find the missing number

## Problem

An array contains N-1 distinct values from the range 1 through N. Read N (2 to 1001), followed by the N-1 values, and print the missing value.

## Example

Input:

```text
5
1 2 4 5
```

Output:

```text
3
```

## Approach

XOR the complete range 1 through N with every input value. Matching values cancel, leaving the missing value. This avoids the overflow risk of summing the full range.

## Complexity

O(N) time and O(1) extra space.

## Compile and run

Compile with `gcc -std=c11 -Wall -Wextra -pedantic missing_number.c -o missing_number` and provide input in the format above.
