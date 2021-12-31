#include<stdio.h>
void main ()
{
 int n;
 printf("enter a number");
 scanf("%d", &n);
  if(90<=n && n<=100)
  {printf("A grade");
  }
  else if (80<=n&& n<=90)
  {printf("B grade");
  }
  else if (70<=n && n<=80)
  {printf("C grade");
  }
  else if (60<=n && n<=70)
  {printf("D grade");
  }
  else if (50<=n && n<=60)
  {printf("E grade");
  }
  else if (40<=n && n<=50)
  {printf("F grade");
  }
  else if (n<=40)
  {printf("fail");
  }
  else if (n>=100)
  {printf("invalid input");
  }
}
