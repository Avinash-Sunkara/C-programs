# Two sum

## Problem

Read N (1 to 1000), an array of N integers, and a target. Print the two zero-based indices of distinct elements whose values add to the target, or `No solution` if no pair exists. If several pairs work, any one pair is acceptable.

## Example

Input:

```text
4
2 7 11 15
9
```

Output:

```text
0 1
```

## Approach

Check each pair once. This simple version is useful for learning nested loops; a hash table can reduce the time for larger inputs.

## Complexity

O(N²) time and O(1) extra space.

## Compile and run

Compile with `gcc -std=c11 -Wall -Wextra -pedantic two_sum.c -o two_sum` and provide input in the format above.
