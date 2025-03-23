#include <stdio.h>

int main() {
    int num1, num2, choice;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Sum = %d\n", num1 + num2);
            break;
        case 2:
            printf("Difference = %d\n", num1 - num2);
            break;
        case 3:
            printf("Product = %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Quotient = %d\n", num1 / num2);
            else
                printf("Division by zero error!\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
