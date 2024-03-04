#include <stdio.h>
int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n) {
    if (n <= 1)
        return n;

    int prev = 0, curr = 1, next;
    for (int i = 2; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
void output(int n, int fibo) {
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}
int main() {
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}
