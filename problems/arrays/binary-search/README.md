# Binary search

## Problem

Read N (1..1000), N sorted integers, and a target. Print its zero-based index, or -1.

## Example

Input:

```text
5
1 3 5 7 9
7
```

Output:

```text
3
```

## Approach

Check the middle value and discard the half that cannot contain the target.

## Complexity

O(log N) time, O(1) space.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic binary_search.c -o binary_search`. Run the executable and provide input in the format above. The solution uses standard input and output.
