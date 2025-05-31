## Dynamic Memory Allocation (DMA) in C

### Code Example: dynamic1.c

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name;

    // Allocate memory dynamically for 32 characters
    name = malloc(32);

    if (name == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("What is your name?\n");
    scanf("s", name); 
    printf("Hello %s\n", name);

    free(name); // Free the allocated memory

    return 0;
}
```

### Explanation: Dynamic Memory Allocation (DMA)

Dynamic Memory Allocation (DMA) allows you to allocate memory at runtime using functions like `malloc`, `calloc`, `realloc`, and to free it using `free`. This is useful when you don't know the amount of memory your program will need at compile time.

- `malloc(size)`: Allocates `size` bytes of memory and returns a pointer to the beginning of the block.
- `free(ptr)`: Releases the memory previously allocated by `malloc` (or related functions).

**In the code above:**
- We allocate memory for a string of up to 31 characters (`malloc(32)`), plus the null terminator.
- We check if the allocation was successful.
- We use `scanf` to read the user's name, limiting input to prevent buffer overflow.
- After using the memory, we release it with `free(name)` to avoid memory leaks.
- We dont use ampersand when using pointers in the scanf, the ampersand means we are sending the address not the value(works fine with regular variables) , when using pointers we get address of the pointer but we want the value