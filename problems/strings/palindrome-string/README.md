# Palindrome string

## Problem

Read a line; determine whether it is a palindrome ignoring case and non-alphanumeric characters.

## Example

Input:

```text
A man, a plan, a canal: Panama!
```

Output:

```text
Palindrome
```

## Approach

Move inward from both ends, skipping punctuation and spaces, and compare lowercase characters.

## Complexity

O(N) time, O(1) extra space.

## Compile and run

From this folder, compile using `gcc -std=c11 -Wall -Wextra -pedantic palindrome_string.c -o palindrome_string`. Run the executable and provide input in the format above. The solution uses standard input and output.
