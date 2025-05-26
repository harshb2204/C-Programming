# C Tutorial - Arithmetic Operators



## Code Explanation

```c
#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Addition
    printf("Addition: %d + %d = %d\n", a, b, a + b);

    // Subtraction
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);

    // Multiplication
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    // Division
    printf("Division: %d / %d = %d\n", a, b, a / b);

    // Modulus (remainder)
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Increment
    printf("Increment: %d++ = %d\n", a, ++a);

    // Decrement
    printf("Decrement: %d-- = %d\n", b, --b);

    return 0;
}
```

### Breakdown of Arithmetic Operators:

1. **Addition (`+`)**
   - Adds two numbers.
   - Example: `10 + 5 = 15`

2. **Subtraction (`-`)**
   - Subtracts the second number from the first.
   - Example: `10 - 5 = 5`

3. **Multiplication (`*`)**
   - Multiplies two numbers.
   - Example: `10 * 5 = 50`

4. **Division (`/`)**
   - Divides the first number by the second.
   - Example: `10 / 5 = 2` (Integer division result)

5. **Modulus (`%`)**
   - Returns the remainder of the division.
   - Example: `10 % 5 = 0`

6. **Increment (`++`)**
   - Increases the value of a variable by 1.
   - Example: `a = 10; ++a; // a becomes 11`

7. **Decrement (`--`)**
   - Decreases the value of a variable by 1.
   - Example: `b = 5; --b; // b becomes 4`




