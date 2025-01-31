#include <stdio.h>
int input_number() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    return num;
}
int is_prime(int n) {
    if (n <= 1)
        return 0; 
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0; 
    }
    return 1; 
}
void output(int n, int result) {
    if (result)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

int main() {
    int num = input_number();
    int result = is_prime(num);
    output(num, result);
    return 0;
}
