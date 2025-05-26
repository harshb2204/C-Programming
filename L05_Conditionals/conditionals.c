#include <stdio.h>

int main() {
    int number;
    char grade;
    
    // Example 1: Basic if-else statement
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf("%d is a positive number\n", number);
    } else if (number < 0) {
        printf("%d is a negative number\n", number);
    } else {
        printf("The number is zero\n");
    }
    
    // Example 2: Switch case
    printf("\nEnter a grade (A/B/C/D/F): ");
    scanf(" %c", &grade);
    
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Satisfactory\n");
            break;
        case 'D':
            printf("Needs improvement\n");
            break;
        case 'F':
            printf("Failed\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    
    // Example 3: Nested if statements
    if (number > 0) {
        if (number % 2 == 0) {
            printf("%d is positive and even\n", number);
        } else {
            printf("%d is positive and odd\n", number);
        }
    }
    
    // Example 4: Ternary operator
    int age = 20;
    printf("\n%s\n", (age >= 18) ? "You are an adult" : "You are a minor");
    
    return 0;
}
