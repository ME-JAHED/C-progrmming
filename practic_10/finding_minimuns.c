#include <stdio.h>
#include<limits.h>
int main() {
    int N, K;
    printf("Enter the total number of elements (N): ");
    scanf("%d", &N);
    printf("Enter the group size (K): ");
    scanf("%d", &K);

    printf("Enter the elements:\n");

    int num, count = 0, min = INT_MAX;
    // Read the first element
    //scanf("%d", &min);

    // Iterate through the remaining elements
    for (int i = 1; i < N; i++) {
        scanf("%d", &num);

        // Update the minimum value if necessary
        if (num < min)
            min = num;

        count++;

        // If the group size is reached, print the minimum and reset
        if (count == K) {
            printf("Minimum: %d\n", min);
            count = 0;
            min = num; // Set the minimum for the next group
        }
    }

    // If there are remaining elements in the last group, print the minimum
    if (count > 0)
        printf("Minimum: %d\n", min);

    return 0;
}
