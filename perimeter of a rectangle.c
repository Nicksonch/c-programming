/*perimeter of a rectangle*/
#include<stdio.h>
int main()
{
    int l, w, perimeter;
    printf("\nenter the value of l:/t");
    scanf("%d", &l);
    printf("\nenter the value of w:/t");
    scanf("%d", &w);
    perimeter=2*l+2*w;
    printf("perimeter=%d",perimeter);
    return 0;
}
