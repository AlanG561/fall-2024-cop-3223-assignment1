// Alan Garcia
// UCF ID : 5626842

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to calculate the distance
double calculateDistance() {
    double x1, x2, y1, y2;
    printf("Enter x1: ");
    scanf("%lf", &x1); 
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
    printf("The distance between the two points is %.3f\n", distance);

    return distance;
}

// Function to calculate the perimeter 
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);
    return 3; // Difficulty rating
}

// Function to calculate the area
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * radius * radius;
    printf("The area of the city encompassed by your request is %.3f\n", area);
    return 3;
}

// Function to calculate the width
double calculateWidth() {
    double x1, x2;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);

    double width = x2 - x1; 

    printf("Point #1 entered: x1 = %.3f\n", x1);
    printf("Point #2 entered: x2 = %.3f\n", x2);
    printf("The width of the city encompassed by your request is %.3f\n", width);

    return 2;
}

// Function to calculate the height
double calculateHeight() {
    double y1, y2;
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double height = y2 - y1; 

    printf("Point #1 entered: y1 = %.3f\n", y1);
    printf("Point #2 entered: y2 = %.3f\n", y2);
    printf("The height of the city encompassed by your request is %.3f\n", height);

    return 2;
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}
