# C Input/Output (I/O) Operations


## Standard Input/Output
C provides several functions to handle standard input and output via the `stdio.h` library.

### 1. Printing Output
- `printf()`: Used to print formatted output to the console.
- `putchar()`: Prints a single character.
- `puts()`: Prints a string followed by a newline.

#### Example:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    putchar('A');
    puts("This is a C program.");
    return 0;
}
```

### 2. Taking Input
- `scanf()`: Reads formatted input from the user.
- `getchar()`: Reads a single character.
- `gets()` (Deprecated): Reads a line of input.
- `fgets()`: Safely reads a line of input.

#### Example:
```c
#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}
```

## Difference Between `fgets()`, `scanf()`, and `gets()`

1. **`fgets()` (Recommended)**  
   - **Usage:** Safely reads a string, including spaces, from input.  
   - **Syntax:** `fgets(str, size, stdin);`  
   - **Pros:**  
     - Prevents buffer overflow by limiting input size.  
     - Can read entire lines, including spaces.  
   - **Cons:**  
     - Retains the newline character (`\n`) unless removed manually.  
   - **Example:**  
     ```c
     char name[50];
     fgets(name, sizeof(name), stdin);
     ```

2. **`scanf()`**  
   - **Usage:** Reads formatted input but stops at whitespace (e.g., space, newline).  
   - **Syntax:** `scanf("%s", str);`  
   - **Pros:**  
     - Works well for simple inputs without spaces.  
   - **Cons:**  
     - **Unsafe:** Can cause buffer overflow if input exceeds allocated size.  
     - Cannot read multi-word input.  
   - **Example:**  
     ```c
     char name[50];
     scanf("%s", name); // Only captures first word
     ```

3. **`gets()` (Deprecated & Unsafe!)**  
   - **Usage:** Reads an entire line of input, including spaces.  
   - **Cons:**  
     - Does **not** check buffer size, making it prone to **buffer overflow attacks**.  
     - Removed in **C11** due to security risks.  
   - **Example:** (Do NOT use!)  
     ```c
     char name[50];
     gets(name); // Unsafe, do not use!
     ```

### **Best Practice**  
Always use **`fgets()`** for safe and reliable input handling. If using `scanf()`, ensure proper size constraints. 🚀

