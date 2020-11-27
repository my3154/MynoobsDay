#include<stdio.h>
int main(void)
{
	int money=0,cost,mark=1,i,temp;
	int bank=0,mark2=0;
	
	for(i=1;i<=12;i++)
	{
		money+=300;
		scanf("%d",&cost);
		money=money-cost;
		
		if(money<0&&mark2==0){
			mark=0;
			temp=i;
			mark2++;
		}
		
		bank+=money/100;
		money%=100;
	}
	if(mark==0){
		printf(">>>DEATH MOUTH:%d",temp);
	}
	else{
		money+=bank*120;
		printf("%d",money);
	}//Í¦²»´í£¡ 
}
