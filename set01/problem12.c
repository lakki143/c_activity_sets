//Write a C program to find the sum of _n_ complex numbers
#include <stdio.h>

// Structure to represent a complex number
struct _complex {
    float real, imaginary;
};

// Typedef for ease of use
typedef struct _complex Complex;

// Function declarations
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    // Get the number of complex numbers
    int n = get_n();

    // Declare an array of complex numbers
    Complex numbers[n];

    // Input the array of complex numbers
    input_n_complex(n, numbers);

    // Calculate the sum
    Complex sum = add_n_complex(n, numbers);

    // Output the result
    output(n, numbers, sum);

    return 0;
}

// Function to get the number of complex numbers
int get_n() {
    int n;
    printf("Enter the number of arrays: ");
    scanf("%d", &n);
    return n;
}

// Function to input a complex number
Complex input_complex() {
    Complex c;
    printf("Enter the real and imaginary parts separated by space: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}

// Function to input an array of complex numbers
void input_n_complex(int n, Complex c[n]) {
    for (int i = 0; i < n; ++i) {
        c[i] = input_complex();
    }
}

// Function to add two complex numbers
Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

// Function to add an array of complex numbers
Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0}; // Initialize sum to 0+0i

    for (int i = 0; i < n; ++i) {
        sum = add(sum, c[i]);
    }

    return sum;
}

// Function to output the result
void output(int n, Complex c[n], Complex result) {
    printf("(");
    for (int i = 0; i < n - 1; ++i) {
        printf("%.1f+%.1fi + ", c[i].real, c[i].imaginary);
    }
    printf("%.1f+%.1fi) is %.1f+%.1fi\n", c[n - 1].real, c[n - 1].imaginary, result.real, result.imaginary);
}
