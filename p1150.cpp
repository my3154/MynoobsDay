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
		smo=0;//�������� 
		
		smo=han/k;
		han=smo+han%k;//�������� 
		
		sum+=smo;
		smo=0;//�ٴ�����
		
	}//�����˼�룬�͵�������Ϸ��~ 
	printf("%d",sum);
}
