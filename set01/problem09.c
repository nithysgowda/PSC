#include <stdio.h>
#include<math.h>

float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n) {
    return sqrt(n);
}

void output(float n, float sqrroot) {
    printf("The square root of %.2f is: %.4f\n", n, sqrroot);
}

int main() {
    float num, sqrt_num;
    num = input();
    if (num < 0) {
        printf("Square root of negative numbers is undefined.\n");
    } else {
        sqrt_num = square_root(num);
        output(num, sqrt_num);
    }
    return 0;
}
