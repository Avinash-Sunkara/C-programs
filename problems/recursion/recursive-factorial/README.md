# Recursive factorial

## Problem

Read N from 0 through 20 and print N factorial using recursion.

## Example

Input:

```text
5
```

Output:

```text
120
```

## Approach

Use factorial(0)=1 as the base case, otherwise return N * factorial(N-1).

## Complexity

O(N) time and call stack.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic recursive_factorial.c -o recursive_factorial`. Run the executable and provide input in the format above. The solution uses standard input and output.
