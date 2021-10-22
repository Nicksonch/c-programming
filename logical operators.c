/*logical operators in c */
#include <stdio.h>
int main ()
{
    int a=5, b=7, c=8;
    printf("a is less than b and a is less than c is %d\n", (a<b) && (a<c));
    printf("b is greater than a or c is less than b is %d\n", (b>a) || (c<b));
    printf("c is less than b not c is greater than a is %d\n", (!(c<b)&&(c>a)));
    return 0;
    }
