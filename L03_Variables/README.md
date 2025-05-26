# C Tutorial - Data Types and Memory Sizes




```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer types
    int age = 20;
    printf("My age is %d\n", age);
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Range of int: %d to %d\n\n", INT_MIN, INT_MAX);

    // Character type
    char first = 'h';
    printf("Character is %c\n", first);
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Range of char: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    // Floating point types
    float pi = 3.14f;
    printf("Value of pi: %f\n", pi);
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Range of float: %e to %e\n\n", FLT_MIN, FLT_MAX);

    // Double precision floating point
    double largePi = 3.1415926535;
    printf("Value of largePi: %lf\n", largePi);
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Range of double: %e to %e\n\n", DBL_MIN, DBL_MAX);

    // Unsigned integer
    unsigned int positiveNum = 150;
    printf("Unsigned int value: %u\n", positiveNum);
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Range of unsigned int: 0 to %u\n", UINT_MAX);

    return 0;
}
```

### Breakdown of the Code:

1. **`#include <stdio.h>`**
   - Standard I/O library for `printf()`.
2. **`#include <limits.h>` and `#include <float.h>`**
   - These libraries provide macros defining the minimum and maximum values for various data types.
3. **Data Types Demonstrated:**
   - `int`: Stores whole numbers. `sizeof(int)` returns its memory size.
   - `char`: Stores a single character, uses 1 byte, and has a range from `CHAR_MIN` to `CHAR_MAX`.
   - `float`: Stores decimal values, has a range from `FLT_MIN` to `FLT_MAX`.
   - `double`: More precise floating-point storage.
   - `unsigned int`: Can only store non-negative numbers.

## Data Type Sizes and Ranges

| Data Type        | Size (bytes) | Minimum Value        | Maximum Value        |
|-----------------|-------------|----------------------|----------------------|
| `char`          | 1           | -128                 | 127                  |
| `int`           | 4           | -2,147,483,648       | 2,147,483,647        |
| `unsigned int`  | 4           | 0                    | 4,294,967,295        |
| `float`         | 4           | 1.2E-38              | 3.4E+38              |
| `double`        | 8           | 2.2E-308             | 1.8E+308             |





