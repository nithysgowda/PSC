#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter coordinates for Point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);

    printf("Enter coordinates for Point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}
void output(float x1, float y1, float x2, float y2, float distance) {
    printf("Distance between Point 1 (%.2f, %.2f) and Point 2 (%.2f, %.2f) is %.2f units.\n",
           x1, y1, x2, y2, distance);
}
int main() {
    float x1, y1, x2, y2;
    input(&x1, &y1, &x2, &y2);
    float distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance);
    return 0;
}
