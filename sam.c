#include <stdio.h>

int main() {
  int num1, num2;
  char operator;
  int result;

  printf("Enter 2 numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);

  switch (operator) {
    case '+':
      result = num1 + num2;
      printf("The result of addition is: %d\n", result);
      break;
    case '-':
      result = num1 - num2;
      printf("The result of subtraction is: %d\n", result);
      break;
    case '*':
      result = num1 * num2;
      printf("The result of multiplication is: %d\n", result);
      break;
    case '/':
      if (num2 != 0) {
        result = num1 / num2;
        printf("The result of division is: %d\n", result);
      } else {
        printf("Error: Division by zero is not allowed.\n");
      }
      break;
    default:
      printf("Error: Invalid operator.\n");
      break;
  }

  return 0;
}