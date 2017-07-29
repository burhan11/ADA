#include<stdio.h>
#include<time.h>
int main()
{
	int n;
	scanf("%d",&n);
	clock_t begin = clock();
	printf("Start Time:%ld\n",begin);
	printf("%d\n",fibo(n));
	clock_t end= clock(); 
	printf("End Time:%ld\n",end);
	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total);	
}
int fibo(int n)
{
    int i,h,j,k,t;
    i=1,h=1;
    j=0,k=0;
    while(n>0)
    {
        if(n%2==1)
        {
            t=j*h;
            j=(i*h)+(j*k)+t;
            i=(i*k)+t;
        }
        t=h*h;
        h=(2*k)*h+t;
        k=(k*k)+t;
        n=n/2;
    }
    return j;
}

