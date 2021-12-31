#include<stdio.h>
void main ()
{
	float cp, sp, loss, profit, losspercentage, profitpercentage;
	scanf("%f%f",&cp,&sp);
	loss=cp-sp;
	profit=sp-cp;
	losspercentage=(loss/cp)*100;
	profitpercentage=(profit/cp)*100; 
    if(cp>sp)
	{printf("loss%f\nlosspercentage%f",loss,losspercentage);
	}
    else if(sp>cp)
	{printf("profit%f\nprofitpercentage%f",profit,profitpercentage);
	}
	else if (sp=cp)
	{printf("no profit no loss");
	}
																		}
