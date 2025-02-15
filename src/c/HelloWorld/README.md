# C Tutorial - Hello World Program



## Code Explanation

```c
#include <stdio.h>  // Standard Input/Output library, required for printf function

// The main function - execution of the program starts from here
int main() {
    printf("Hello world");  // Prints "Hello world" to the console

    return 0;  // Returns 0 to indicate successful execution
}
```

### Breakdown of the Code:

1. **`#include <stdio.h>`**
   - This is a **preprocessor directive** that includes the Standard Input/Output library.
   - It allows the use of functions like `printf()` for displaying output.

2. **`int main()`**
   - The **main function** is the entry point of every C program.
   - It has a return type `int`, meaning it should return an integer value.

3. **`printf("Hello world");`**
   - This function prints text to the console.
   - `"Hello world"` is a **string literal** enclosed in double quotes.
   - The **semicolon (`;`)** marks the end of a statement.

4. **`return 0;`**
   - This statement is used to indicate that the program has executed successfully.
   - Returning `0` tells the operating system that the program has finished without errors.

## How to Compile and Run the Program

### Using GCC (GNU Compiler Collection)

1. Open a terminal or command prompt.
2. Navigate to the directory where your C file is located.
3. Compile the program using:
   ```sh
   gcc hello.c -o hello
   ```
4. Run the executable:
   ```sh
   ./hello   # On Linux/macOS
   hello.exe  # On Windows
   ```

You should see the output:
```
Hello world
```



