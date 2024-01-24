 //Write a C program to add two numbers using **pass by reference**
 #include <stdio.h>

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
    printf("Enter first number: ");
    scanf("%d", a);

    printf("Enter second number: ");
    scanf("%d", b);
}

void add(int a, int b, int *sum) {
    *sum = a + b;
}

void output(int a, int b, int sum) {
    printf("The sum of %d and %d is %d\n", a, b, sum);
}