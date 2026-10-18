# Count set bits

## Problem

Read an unsigned integer and print the number of 1 bits in its binary representation.

## Example

Input:

```text
13
```

Output:

```text
3
```

## Approach

Clear the lowest set bit with value &= value - 1; each loop removes one set bit.

## Complexity

O(number of set bits).

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic count_set_bits.c -o count_set_bits`. Run the executable and provide input in the format above. The solution uses standard input and output.
