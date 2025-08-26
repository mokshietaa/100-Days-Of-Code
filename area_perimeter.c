#include <stdio.h>
int main() {
int length, width, area, perimeter;
printf("Enter length of rectangle: ");
scanf("%d", &length);
printf("Enter width of rectangle: ");
scanf("%d", &width);
area = length * width;
perimeter = 2 * (length + width);
printf("Area of the rectangle: %d\n", area);
printf("Perimeter of the rectangle: %d\n", perimeter);

return 0;
}