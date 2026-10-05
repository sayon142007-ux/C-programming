#include <stdio.h>

// Function to reverse the digits of a number
int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int n, i;
    
    // Initializing the first three terms of Tribonacci series
    int t1 = 0, t2 = 1, t3 = 1, nextTerm;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("\nOriginal Tribonacci -> Digit Reversed:\n");
    
    for (i = 1; i <= n; ++i) {
        int currentTerm;
        
        // Handle the first three base cases
        if (i == 1) currentTerm = t1;
        else if (i == 2) currentTerm = t2;
        else if (i == 3) currentTerm = t3;
        else {
            // Calculate next term as the sum of previous three terms
            nextTerm = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = nextTerm;
            currentTerm = nextTerm;
        }
        
        // Reverse and print the current term
        int reversedTerm = reverseDigits(currentTerm);
        printf("%d -> %d\n", currentTerm, reversedTerm);
    }

    return 0;
}
