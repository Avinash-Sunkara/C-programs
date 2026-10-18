# C Programs: Beginner to Advanced

A practical collection of C examples and exercises, organized by topic and difficulty. Programs use straightforward syntax, meaningful names, and comments where they clarify the steps.

## Repository layout

| Folder | What it contains |
| --- | --- |
| [`problems/`](problems/) | Self-contained exercises, each with its own statement, examples, and solution. |
| [`problems/loops/count-1-to-n/`](problems/loops/count-1-to-n/) | First exercise: print every integer from 1 through a user-provided limit. |
| [`Functions/`](Functions/) | Existing function examples and notes. Some are original `.txt` study files. |
| Root `.txt` files | Original notes and practice snippets retained from the starter repository. |

## Learning path

The collection is intended to grow from basic to advanced topics:

1. **Basics:** output, input, variables, data types, and operators.
2. **Decisions and loops:** `if`/`else`, `switch`, and `for`/`while`/`do-while`.
3. **Arrays and strings:** storing and processing groups of values and text.
4. **Functions:** reusable code, parameters, return values, and recursion.
5. **Pointers and memory:** addresses, pointer operations, and dynamic allocation.
6. **Structures and files:** custom data types and file input/output.
7. **Advanced practice:** algorithms, data structures, and larger exercises.

Each new exercise should live in a descriptive topic folder under `problems/`. Put its problem explanation in a `README.md` beside the `.c` solution.

## Compile and run

You need a C compiler such as GCC. From the repository root, compile an exercise with:

```sh
gcc -std=c11 -Wall -Wextra -pedantic problems/loops/count-1-to-n/count_1_to_n.c -o count_1_to_n
```

Run it on Linux/macOS with `./count_1_to_n`, or on Windows with `count_1_to_n.exe`.

## Contributing practice solutions

- Keep each program focused on one problem.
- Prefer standard C and readable names.
- Check input before using it, and explain assumptions in the problem README.
- Include sample input/output and a short explanation of the approach.
