#include<stdio.h>
#include<conio.h>
int main()
{
    float radius,area;

    printf("Enter radius :\n");
    scanf("%f",&radius);

    area = 3.14*radius*radius;
    {
        printf("area of circle is %.2f and radius is %.2f",area,radius);
    }
    return 0;
}
