#include <stdio.h>

// Define the rectangle structure
struct rectangle {
    int length;
    int width;
};

// Function to calculate area
int rectangle_area(struct rectangle r) {
    return r.length * r.width;
}

// Function to calculate perimeter
int rectangle_perimeter(struct rectangle r) {
    return 2 * (r.length + r.width);
}

int main() {
    struct rectangle r1;

    // Assign values
    r1.length = 10;
    r1.width = 5;

    // Print results
    printf("Area of rectangle: %d\n", rectangle_area(r1));
    printf("Perimeter of rectangle: %d\n", rectangle_perimeter(r1));

    return 0;
}
