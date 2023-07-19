#include <stdio.h>
#include <math.h>
#include<stdlib.h>
typedef struct 
{
    float x;
    float y;
} Point;

// Function prototypes
void read_input(Point *p1, Point *p2);
double calculate_distance(Point p1, Point p2);

int main()
{
    Point p1, p2;
    double distance;

    // Read in user input
    read_input(&p1, &p2);

    // Calculate distance between two points
    distance = calculate_distance(p1, p2);

    // Output distance to user
    printf("Distance = %lf", distance);

    return 0;
}

// Reads user input for two points
void read_input(Point *p1, Point *p2)
{
    printf("Enter coord1: ");
    if (scanf("%f %f", &(p1->x), &(p1->y)) != 2) {
        printf("Invalid input. Exiting...\n");
        exit(1);
    }

    printf("Enter coord2: ");
    if (scanf("%f %f", &(p2->x), &(p2->y)) != 2) {
        printf("Invalid input. Exiting...\n");
        exit(1);
    }

    printf("Coords: (%.2f,%.2f) and (%.2f,%.2f)\n", p1->x, p1->y, p2->x, p2->y);
}

// Calculates distance between two points using the distance formula
double calculate_distance(Point p1, Point p2)
{
    double distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return distance;
}
