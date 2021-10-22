/*relational operators in c */
#include <stdio.h>
int main()
{
    int a = 9, b = 9, c = 11;
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", b, a, b != a);
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", b, c, b < c);
    printf("%d >= %d is %d\n", c, b, c >= b);
    printf("%d <= %d is %d\n", b, c, b <= c);

    return 0;
}
