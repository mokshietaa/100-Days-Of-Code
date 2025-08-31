//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c; 
    if (d > 0) {
        float root1 = (-b + sqrt(d)) / (2 * a);
        float root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1: %f\n", root1);
        printf("Root 2: %f\n", root2);
    } else if (d == 0) {
        float root = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root: %f\n", root);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1: %f + %fi\n", realPart, imagPart);
        printf("Root 2: %f - %fi\n", realPart, imagPart);
    }
    return 0;
}
    