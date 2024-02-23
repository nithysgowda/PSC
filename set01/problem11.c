#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input_complex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("The sum of ");
    printf("%.2f + %.2fi and %.2f + %.2fi is %.2f + %.2fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main() {
    Complex num1, num2, result;
    printf("For first complex number:\n");
    num1 = input_complex();
    printf("\nFor second complex number:\n");
    num2 = input_complex();

    result = add_complex(num1, num2);

    output(num1, num2, result);

    return 0;
}
