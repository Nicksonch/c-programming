#include <stdio.h>
int main()
{
	int num_1, num_2, num_3;
	printf("\nenter num_1:");
	scanf("%d", &num_1);
	if(num_1 % 2==1)
	printf("%d is odd.", num_1);
	else
	printf("%d is even.", num_1);
	printf("\nenter num_2:");
	scanf("%d", &num_2);
	if(num_2 % 2==0)
    printf("%d is even.", num_2);
	else
		printf("%d is odd.", num_2);
	printf("\nenter num_3:");
		scanf("%d", &num_3);
		if (num_3 % 2==0)
	printf("%d is even.", num_3);
		else
	printf("%d is odd.", num_3);
	 return 0;
}

