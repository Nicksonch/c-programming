/*area of a circle*/
#include<stdio.h>
int main()
{
    int r;
    float PI,area;
    PI=3.142;
    printf("\nenter the value of r:\t");
    scanf("%d", &r);
    area=PI*r*r;
    printf("area=%f", area);
    return 0;
}
