# Second distinct largest

## Problem

Read N (2..1000) integers. Print the second distinct largest value, or `No second largest`.

## Example

Input:

```text
5
4 1 9 9 6
```

Output:

```text
6
```

## Approach

Track the largest and second-largest distinct values in one pass.

## Complexity

O(N) time, O(1) extra space.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic second_largest.c -o second_largest`. Run the executable and provide input in the format above. The solution uses standard input and output.
