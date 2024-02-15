#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int number, result;

    // Input number
    number = input_number();

    // Check if the number is composite
    result = is_composite(number);

    // Output result
    output(number, result);

    return 0;
}

// Function to input number
int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to check if a number is composite
int is_composite(int n) {
    int i, factors = 0;
    for (i = 1; i <= n; ++i) {
        if (n % i == 0)
            factors++;
    }
    return (factors > 2); // If number of factors is greater than 2, it's composite
}

// Function to output result
void output(int n, int result) {
    if (result)
        printf("%d is a composite number\n", n);
    else
        printf("%d is not a composite number\n", n);
}