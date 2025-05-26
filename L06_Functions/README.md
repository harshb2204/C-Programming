# Output Buffering in C

## Overview
In C, `printf()` output is buffered, meaning it doesn't immediately show up on the screen. Instead, it's stored temporarily in a buffer (a memory area) and is flushed (i.e., written to the terminal) in specific cases.

## When Output is Flushed
The buffer is flushed (written to the terminal) in the following cases:

1. When a newline character `\n` is printed
2. When the buffer gets full
3. When `fflush(stdout)` is explicitly called
4. When the program ends