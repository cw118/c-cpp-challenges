// Problem "Sum of Digits of a Five Digit Number" by mahak_bagha1 on HackerRank
// Objective: Use the modulo operator to complete the following task.
// Task: Given a five digit integer, print the sum of its digits.
// Example: an input of 10564 should ouput 16

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int j = 0;
    for (int i = 1; i <= 5; i++) {
        j += (n % (int)pow(10, i)) / (int)pow(10, i-1);
    }
    printf("%d", j);

    return 0;
}
