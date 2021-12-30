#include<stdio.h>
void main ()
{
  int cp, sp, profit, loss ;
  printf("enter cost price \n selling price");
  scanf("%d%d",&cp,&sp);
  profit=sp-cp;
  loss=cp-sp;
  if(sp>cp)
  {
  	printf("you got profit %d",profit);
  }
  else if (cp>sp)
  {
  	printf("you got loss %d", loss);
  }
  else
  {
  	printf("no loss no profit");
  }
}
