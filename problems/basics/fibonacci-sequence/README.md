# Fibonacci sequence

## Problem

Read N (1 to 94) and print the first N Fibonacci numbers, starting with 0 and 1. The limit keeps every printed value within `unsigned long long`.

## Example

Input: `7`

Output: `0 1 1 2 3 5 8`

## Approach

Keep the previous two terms. Print the current term, then update the pair for the next iteration.

## Complexity

O(N) time and O(1) extra space.

## Compile and run

Compile with `gcc -std=c11 -Wall -Wextra -pedantic fibonacci_sequence.c -o fibonacci_sequence` and provide N as input.
