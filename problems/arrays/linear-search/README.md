# Linear search

## Problem

Read N (1..1000), N integers and a target. Print its first zero-based index, or -1.

## Example

Input:

```text
5
3 7 2 7 9
7
```

Output:

```text
1
```

## Approach

Check each value from left to right, stopping at the first match.

## Complexity

O(N) time, O(N) storage.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic linear_search.c -o linear_search`. Run the executable and provide input in the format above. The solution uses standard input and output.
