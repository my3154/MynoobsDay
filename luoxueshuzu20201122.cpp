#include <stdio.h> 
#include <stdlib.h> 
int main(void) 
{ 
	int N,i,j,n,num=1; 
	scanf("%d",&N); 
	int a[N][N]={0}; 

	for(n=0;n<=N/2;n++) 
	{ 
	for(j=n;j<=N-n-1;j++) //zuo 
    	a[n][j]=num++;//hang de di jian!
		 
	for(i=n+1;i<N-n-1;i++) //xia
    	a[i][N-n-1]=num++; //lie de di jia!!   
    	
    for(j=N-n-1;j>n;j--) 
    	a[N-n-1][j]=num++; 
    	
    for(i=N-n-1;i>n;i--) 
    	a[i][n]=num++; 
	}   
     
   for(i=0;i<N;i++) 
   { 
     for(j=0;j<N;j++) 
     printf("%2d\t",a[i][j]); 
     
     printf("\n"); 
   }    
}
