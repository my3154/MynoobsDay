#include<stdio.h>
int main(void)
{
	int n,k;
	scanf("%d%d",&n,&k);
	int smo=n,han=n;;
	int sum=0;
	
	while(han>=k)
	{
		sum+=smo;
		smo=0;//先享受了 
		
		smo=han/k;
		han=smo+han%k;//各种运算 
		
		sum+=smo;
		smo=0;//再次享受
		
	}//巧妙的思想，就当作打游戏吧~ 
	printf("%d",sum);
}
