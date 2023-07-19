#include<stdio.h>
#include<math.h>
static struct point
{
    float x;float y;
}p1,p2;
void read_display();
double distance();
int main()
{
    double dist;
    read_display();
    dist = distance();
    printf("Distance = %lf",dist);    
    return 0;
}
void read_display()
{
    printf("Enter coord1 : ");
    scanf("%f%f",&p1.x, &p1.y);
    printf("Enter coord2 : ");
    scanf("%f%f",&p2.x, &p2.y);
    printf("Coords : (%f,%f) and (%f,%f)",p1.x,p1.y,p2.x,p2.y);    
}
double distance()
{
    double d;
    d= (p2.x-p1.x)*(p2.x-p1.x) +(p2.y-p1.y)*(p2.y-p1.y);
    return sqrt(d);
}