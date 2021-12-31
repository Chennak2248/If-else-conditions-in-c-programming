#include<stdio.h>
void main ()
{int n1, n2, n3;
scanf("%d%d%d",&n1, &n2, &n3);
if(n1>n2 && n2>n3)
{printf("%d is largest", n1);
}
else if (n2>n1 && n2>n3)
{printf("%d is largest", n2);
}
else if (n3>n1 && n3>n2)
{printf ("%d is largest",n3);
}
else if (n1==n2 && n2==n3)
{printf("given numbers are same");
}
}
