#include <stdio.h>

int main() {
    // Declaring variables
    char name[50];
    int age;
    float height;
    char grade;

    // Taking string input using fgets()
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Reads a string safely

    // Taking integer input using scanf()
    printf("Enter your age: ");
    scanf("%d", &age);

    // Taking float input using scanf()
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Taking character input using scanf()
    printf("Enter your grade: ");
    scanf(" %c", &grade); // Space before %c avoids newline issues

    // Displaying the collected data
    printf("\n--- User Information ---\n");
    printf("Name: %s", name); // fgets() keeps newline, so no need for \n
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
