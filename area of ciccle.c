/*AREA OF A CIRCLE*/
#include<stdio.h>
int main()
{
    int radius, area;
    printf("enter the radius of the circle\n:");
    scanf("%d",&radius);
    area=3.142*radius*radius;
    printf("area=%d",area);
    return 0;
}
