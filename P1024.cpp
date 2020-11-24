#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	float x;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(x=-100;x<100;x++)
	{
		if(a*x*x*x+b*x*x+c*x+d==0){
			printf("%3.2f ",x);
		}
	}
}
