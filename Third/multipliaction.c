#include<stdio.h>
#include<math.h>
 #include <time.h> 
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int count(int n)
{
	int k=0;
	while(n>0)
	{
		k++;
		n=n/2;
	}
	return k;
}
int mul(int x,int y)
{
	int n=max(count(x),count(y));
	if(count(x)==1 || count(y))
		return x*y;
	else
	{
		int n1=n/2;
		int p=pow(x/10,n1);
		int q=pow(x%10,n1);
		int r=pow(y/10,n1);
		int s=pow(y%10,n1);
		int pr=mul(p,r);
		int qs=mul(q,s);
		int sum=mul(p+q,r+s)-pr-qs;
		int res=pr*pow(10,n)+(sum*pow(10,n1)+qs);
		return res;
	}
}

int main()
{
    int a,b;
	clock_t begin = clock();
	printf("Start Time:%ld\n",begin);
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",mul(a,b));
	clock_t end= clock(); 
	printf("End Time:%ld\n",end); 
   	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total);
}

