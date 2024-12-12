#include <stdio.h>

int unique_elements(double first[], int first_size, double second[], int second_size) {
    int count = 0;

    // Loop through all elements of the first array
    for (int i = 0; i < first_size; i++) {
        int found = 0;

        // Check if the current element of the first array is in the second array
        for (int j = 0; j < second_size; j++) {
            if (first[i] == second[j]) {
                found = 1;
                break;  // If the element is found, exit the inner loop
            }
        }

        // If the element was not found, increment the count of unique elements
        if (!found) {
            count++;
        }
    }

    // Return 0 if no unique elements are found
    if (count == 0) {
        return 0;
    }

    // Return the count of unique elements
    return count;
}

int main() {
    double first_array[] = { 1.5, 2.3, 4.0, 5.7, 6.1 };
    double second_array[] = { 2.3, 4.0, 7.8 };

    int first_size = sizeof(first_array) / sizeof(first_array[0]);
    int second_size = sizeof(second_array) / sizeof(second_array[0]);

    int result = unique_elements(first_array, first_size, second_array, second_size);
    printf("Result: %d\n", result);  // Prints the number of unique elements or 0

    return 0;
}
