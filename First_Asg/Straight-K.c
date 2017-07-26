#include <stdio.h>
int maximum(int max,int c)
{
	if(c>max)
	max=c;
	return max;
}

int main(){
	int n,max=0,c=0;
	printf("Size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if((a[i+1]-a[i])==1)
			c++;
		else
		{
			max=maximum(max,c);
			c=0;
		}
	}
	max++;
	printf("Maximum:%d\n",max);
}
