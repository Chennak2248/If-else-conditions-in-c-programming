#include<stdio.h>
void main ()
{
	int m ,p ,c ,cs ;
	printf("enter your marks in maths physics chemistry computerscience ");
	scanf("%d%d%d%d" ,&m, &p, &c, &cs);
	if(m<=35)
	{printf("failed in maths\n");
	}
	if(p<=35)
	{printf("failed in physics\n");
	}
	if(c<=35)
	{printf("failed in chemistry\n");
	}
	if(cs<=35)
	{printf("failed in computer science");
	}
}
