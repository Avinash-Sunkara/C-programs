# Maximum array element

## Problem

Read N (1..1000) and N integers. Print the largest value.

## Example

Input:

```text
5
3 9 -2 8 1
```

Output:

```text
9
```

## Approach

Scan once, retaining the largest value seen so far.

## Complexity

O(N) time, O(1) extra space.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic maximum_element.c -o maximum_element`. Run the executable and provide input in the format above. The solution uses standard input and output.
