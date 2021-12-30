#include<stdio.h>
void main()
{
	int n1, n2;
	printf("enter n1 and n2");
	scanf("%d%d", &n1,&n2);
	if(n1>n2)
	{
		printf("largest number is %d",n1);
	}
	else if (n2>n1)
	{
		printf("largest number is %d",n2);
	}
	else
	{
		printf("both are equal");
	}
}

