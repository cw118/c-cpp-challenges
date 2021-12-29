// A very simple C program that recursively calculates triangular numbers
// (see https://www.mathsisfun.com/definitions/triangular-number.html for a definition of "triangular number").
// Written as part of my exploration of recursion in computer science and programming.

#include <stdio.h>

int trinum(int n);

int main(void) {
    int n;
    // Get number of triangular number in trinum sequence from user
    printf("Enter a number n to get the nth triangular number: ");
    scanf("%d", &n);

    // Call on trinum computing function and print corresponding value
    printf("%d\n", trinum(n));
}

// Helper recursive function to compute triangular numbers
int trinum(int n) {
    if (n == 1) {
        // Base case
        return 1;
    } else {
        // A triangular number is n(n - 1), or just number n + (all values below up to 1) OR triangular number n + triangular number(n - 1).
        // The second equation was used for recursion.
        return n + trinum(n - 1);
    }
}