/*arithmetic operators*/
#include<stdio.h>
int main()
{
int a, b, add, sub, mul, div, rem;
printf("enter a, b,values:");
scanf("%d, %d", &a, &b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
rem=a%b;
printf("add=%d\n", add);
printf("sub=%d\n", sub);
printf("mul=%d\n", mul);
printf("div=%d\n", div);
printf("rem=%d\n", rem);
return 0;
}
