#include<stdio.h>
#include<time.h>
int main()
{
	int i,j,n,a[100];
	scanf("%d",&n);
	printf("Enter values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(1)
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				printf("Indices are : %d %d\n",i,j);
			}
		}
	break;
	}	
}

