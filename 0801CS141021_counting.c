#include<stdio.h>
#include<time.h>
void counting_sort(int a[],int n,int max)
{
     clock_t begin;
     int count[100000]={0},i,j;
     
     for(i=0;i<n;++i)
      count[a[i]]=count[a[i]]+1;
      
     printf("\nSorted elements are:\n");
     for(i=0;i<=max;++i)
      for(j=1;j<=count[i];++j)
       printf("%d ",i);
	printf("\n");
	clock_t end= clock(); 
	printf("End Time:%ld\n",end); 
   	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total ); 
}
 
int main()
{
    int a[100000],n,i,max=0;
    printf("Enter Size:");
    scanf("%d",&n);
    clock_t begin = clock(); 
    printf("Start Time:%ld\n",begin);
    printf("Enter elements:");
                  
    for(i=0;i<n;++i)
    {
     a[i]=rand()%100000;
     if(a[i]>max)
      max=a[i];
    }
     
    counting_sort(a,n,max);
}
