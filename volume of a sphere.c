/*volume of a sphere*/
#include<stdio.h>
int main()
{
    int r;
    float pi, volume;
	pi=3.142;
    printf("\nenter the value of r:\t");
    scanf("%d", &r);
    volume=(4/3)*3.142*r*r*r;
    printf("volume=%f", volume);
    return 0;
}


