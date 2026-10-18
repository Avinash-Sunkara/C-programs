# Count from 1 to N

## Problem

Read a positive whole number `N` and print every integer from `1` to `N`, in order.

## Input

One positive integer `N`.

## Output

The integers from `1` through `N`, separated by spaces, followed by a newline.

## Example

Input:

```text
5
```

Output:

```text
1 2 3 4 5
```

## How it works

The program starts a counter at `1`. A `for` loop prints the counter while it is less than or equal to `N`, then increases it by one each time. The loop stops after printing `N`.

## Compile and run

```sh
gcc -std=c11 -Wall -Wextra -pedantic count_1_to_n.c -o count_1_to_n
./count_1_to_n
```

Enter a positive integer as standard input. The program rejects non-numeric input and values less than 1.
