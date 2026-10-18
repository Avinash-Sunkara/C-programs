# Greatest common divisor

## Problem

Read two non-negative integers and print their greatest common divisor.

## Example

Input:

```text
18 24
```

Output:

```text
6
```

## Approach

Apply Euclid?s algorithm until the second value becomes zero.

## Complexity

O(log(min(A,B))).

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic gcd.c -o gcd`. Run the executable and provide input in the format above. The solution uses standard input and output.
