
#include <stdio.h>

void main() {
  int i, n, sum = 0, avg, arr[100];
  
  // Prompt the user for input
  printf("Enter a number: ");
  scanf("%d", &n);
  
  // Prompt the user to enter the numbers
  printf("Enter the %d numbers:\n", n);
  
  // Loop to read the numbers and calculate the sum
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
  }
  
  // Calculate the average
  avg = sum / n;
  
  // Print the sum and average
  printf("Sum of the %d numbers is %d\n", n, sum);
  printf("Average of the numbers is %d\n", avg);
}
