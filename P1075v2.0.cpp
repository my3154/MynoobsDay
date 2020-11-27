#include<stdio.h>
int main(void)
{
	int x;
	int a=2,b,c;
	int i;
	
	scanf("%d",&x);
	while(a<x)
	{
		if(x%a==0){
			x=x/a;
			a=1;
		}
		a++;
		
	}
	printf("%d",a);
}/*优化了，使得一步到位，不用去一个个拆分合数了。
如28可以看为28，14，7-END.*/ 
