# Reverse a singly linked list

## Problem

Read N (0 to 1000) followed by N integers. Build a singly linked list, reverse its links in place, and print the values in the new order.

## Example

Input:

```text
4
1 2 3 4
```

Output:

```text
4 3 2 1
```

## Approach

Walk through the list once while keeping pointers to the previous node and the next node. Redirect each node's `next` pointer, then use the previous pointer as the new head. Free all allocated nodes before exiting.

## Complexity

O(N) time and O(1) extra space beyond the list nodes.

## Compile and run

Compile with `gcc -std=c11 -Wall -Wextra -pedantic reverse_linked_list.c -o reverse_linked_list` and provide input in the format above.
