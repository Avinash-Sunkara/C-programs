# C Interview Programs: Basic to Advanced

A topic-based practice repository for learning C and preparing for programming interviews and coding rounds. It includes clear standalone solutions, problem statements, examples, and complexity notes. These are common practice patterns; the repository does not claim that a specific company asked a specific question.

## Problem map

| Level | Topic | Practice areas |
| --- | --- | --- |
| Beginner | [Basics](problems/basics/) | Number properties, arithmetic, and simple loops |
| Beginner | [Arrays](problems/arrays/) | Traversal, searching, and sorting |
| Beginner–Intermediate | [Strings](problems/strings/) | Reversal, palindrome checks, and character processing |
| Intermediate | [Recursion](problems/recursion/) | Base cases and recursive problem solving |
| Intermediate | [Pointers](problems/pointers/) | Addresses, references, and swapping values |
| Intermediate | [Bit manipulation](problems/bit-manipulation/) | Binary representation and bit operations |
| Advanced | [Data structures](problems/data-structures/) | Linked lists and pointer-based operations |
| Beginner | [Loops](problems/loops/) | Counting and repetition |

Each problem has its own folder containing a `README.md` and a `.c` solution. The README describes the task, input/output, an example, the approach, and expected complexity where relevant.

## Suggested order

1. Start with `basics/` and the existing `loops/count-1-to-n/` exercise.
2. Practice array traversal before searching and sorting.
3. Work through string tasks using standard C character arrays.
4. Study recursion, then pointers and bit manipulation.
5. Revisit each problem and implement it again without looking at the solution.

## Compile and run

Install a C compiler such as GCC. Compile one file from the repository root, for example:

```sh
gcc -std=c11 -Wall -Wextra -pedantic problems/arrays/second-largest/second_largest.c -o second_largest
```

Run with `./second_largest` on Linux/macOS or `second_largest.exe` on Windows. Unless the problem README says otherwise, enter input in the order shown in its example. The solutions use standard input/output so they can also be adapted to online judges.

## Existing learning notes

The original `Functions/` folder and root `.txt` files are retained as study material. The structured interview exercises are under `problems/`.

## Adding a problem

Create a descriptive folder under the closest topic in `problems/`. Include a short problem README, sample input/output, a readable C solution, and input assumptions. Keep each solution standalone and compile it as C11.
