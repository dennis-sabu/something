#include <stdio.h>

int main() {
    int n, i, j, arr[100], freq[100];

    // Get the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency array
    }

    // Count frequency of each element
    for(i = 0; i < n; i++) {
        int count = 1;
        if(freq[i] == -1) { // Only count unprocessed elements
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark as counted
                }
            }
            freq[i] = count; // Store frequency
        }
    }

    // Display frequency of each element
    printf("Element | Frequency\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d       | %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
