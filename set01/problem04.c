 //Write a C program to add two numbers using **pass by reference**
#include <stdio.h>

// Function Declarations
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main() {
    int num1, num2, result;
    
    input(&num1, &num2);
    
    add(num1, num2, &result);
    
    output(num1, num2, result);
    
    return 0;
}

void input(int *a, int *b) {
    printf("Enter two numbers: ");
    scanf("%d %d", a, b);
}

void add(int a, int b, int *sum) {
    *sum = a + b;
}

void output(int a, int b, int sum) {
    printf("The sum of %d and %d is %d\n", a, b, sum);
}