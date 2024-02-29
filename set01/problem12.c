#include <stdio.h>

struct _complex {
    float real, imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    int n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    Complex result = add_n_complex(n, c);
    output(n, c, result);
    return 0;
}

int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex num;
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter %d complex numbers (real imaginary): \n", n);
    for (int i = 0; i < n; ++i) {
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0};
    for (int i = 0; i < n; ++i) {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) {
    printf("The sum of ");
    for (int i = 0; i < n - 1; ++i) {
        printf("%.2f+%.2fi + ", c[i].real, c[i].imaginary);
    }
    printf("%.2f+%.2fi is %.2f+%.2fi\n", c[n - 1].real, c[n - 1].imaginary, result.real, result.imaginary);
}