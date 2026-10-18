# Swap using pointers

## Problem

Read two integers and swap them through a function that takes their addresses.

## Example

Input:

```text
3 8
```

Output:

```text
8 3
```

## Approach

Dereference each pointer inside the function to access and update the original variables.

## Complexity

O(1) time and space.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic swap_using_pointers.c -o swap_using_pointers`. Run the executable and provide input in the format above. The solution uses standard input and output.
