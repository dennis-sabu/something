#include <stdio.h>

int main() {
    int i, n, arr[100], serh, found = 0;

    // Get the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to search
    printf("Enter the element to be searched: ");
    scanf("%d", &serh);

    // Search for the element
    for(i = 0; i < n; i++) {
        if(arr[i] == serh) {
            printf("Element %d found at index %d\n", serh, i);
            found = 1;
            break;  // Stop searching after finding the first match
        }
    }

    // If element is not found
    if(!found) {
        printf("Element %d not found in the array.\n", serh);
    }

    return 0;
}
