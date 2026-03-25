#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Result = %d", a + b);
    }
    else if(choice == 2) {
        printf("Result = %d", a - b);
    }
    else if(choice == 3) {
        printf("Result = %d", a * b);
    }
    else if(choice == 4) {
        if(b != 0)
            printf("Result = %d", a / b);
        else
            printf("Division by zero error!");
    }
    else if(choice == 5) {
        if(b != 0)
            printf("Result = %d", a % b);
        else
            printf("Modulus by zero error!");
    }
    else {
        printf("Invalid choice!");
    }

    return 0;
}
