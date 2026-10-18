# Bubble sort

## Problem

Read N (1..1000) integers and print them in ascending order.

## Example

Input:

```text
5
5 1 4 2 8
```

Output:

```text
1 2 4 5 8
```

## Approach

Compare adjacent values and swap out-of-order pairs; stop early after a no-swap pass.

## Complexity

O(N?) worst case.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic bubble_sort.c -o bubble_sort`. Run the executable and provide input in the format above. The solution uses standard input and output.
