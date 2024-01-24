//Write a C program to find sum of all natural numbers until _n_
#include <stdio.h>

// Function declarations
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main() {
    // Input
    int n = input_n();

    // Calculate sum
    int sum = sum_n_nos(n);

    // Output
    output(n, sum);

    return 0;
}

// Function to input value of n
int input_n() {
    int n;
    printf("Enter a natural number (n): ");
    scanf("%d", &n);
    return n;
}

// Function to calculate the sum of natural numbers up to n
int sum_n_nos(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// Function to output the result
void output(int n, int sum) {
    printf("The sum of natural numbers up to %d is %d.\n", n, sum);
}
