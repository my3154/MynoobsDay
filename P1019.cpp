#include<stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	char item[N][100];
	int i,j;
	char *start;

	for(i=0;i<N;i++)
	{
		scanf("%s",&item[i]);
	}
	scanf("%s",start);
	
	for(j=0;j<N;j++)
	{
		if(item[j][0]==*start){
			printf("%s",item[j]);
		}
		
	}
	
	
	
	
	
	
	
	for(int u=0;u<N;u++)
	{
		for(int y=0;y<100;y++)
		{
			printf("%c",*item[u][y]);
		}
		printf("\n");
	}
}
