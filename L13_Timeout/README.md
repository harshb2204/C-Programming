# File Descriptor Sets in C

## Overview
A file descriptor set is a data structure used to monitor multiple file descriptors (like files, sockets, pipes, stdin, etc.) for readiness - specifically whether they're ready to read, write, or have an error.

## Purpose
When using the `select()` system call in C, file descriptor sets tell the kernel:
> "Here are the file descriptors I want you to watch. Let me know when any of them becomes ready."

## Basic Usage Example
```c
fd_set rfds;          // Declare the file descriptor set
FD_ZERO(&rfds);       // Clear the set
FD_SET(0, &rfds);     // Add stdin (fd = 0) to the set
```
This code tells the system to monitor file descriptor 0 (stdin) to check if it becomes readable.

## Internal Implementation
File descriptor sets are implemented as:
- A bit array (typically 1024 bits)
- Each bit corresponds to a file descriptor
- If bit n is set, then file descriptor n is being monitored

## Common Use Cases
File descriptor sets are particularly useful when you need to:
- Monitor multiple input sources simultaneously
- Handle multiple file descriptors efficiently
- Watch for activity across different types of I/O (stdin, sockets, pipes, etc.)

## Why Use File Descriptor Sets?
1. `select()` requires knowledge of which file descriptors to monitor
2. File descriptors are represented as simple integers (e.g., 0 for stdin, 1 for stdout, 2 for stderr)
3. Enables monitoring of multiple sources simultaneously (stdin, sockets, pipes, etc.)