#include <stdio.h>

int f(int k)
{
	if(k<=1) 
	{
		return 1;
	} 
	else 
	{
	return f(k-1) + f(k-2);
	}	
}

int f1(int k) {
	int i=0;
	int next=1;
	int old=0;
	int temp=0;	
	for(i=0;i<k;i++) 
	{
		if(i<2) 
		{
			old=1;
			next=1;
		}
		else
	  	{
			temp=old;	
			old = next;		
			next=temp+next;					
		}		
	}
	return next;
}

int main() 
{
	int n,ans=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	ans = f(n-1);
	printf("%d\n",ans);
	ans = f1(n);
	printf("%d\n",ans);
	
}

