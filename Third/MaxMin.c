#include<stdio.h>
#include<time.h>
int max, min;
int a[100];
int main ()
{
 int i,n;
 printf ("\nEnter Size : ");
 scanf ("%d",&n);
 printf ("Enter elements : \n");
 for (i=1;i<=n;i++)
  scanf ("%d",&a[i]);

clock_t begin = clock();
	printf("Start Time:%ld\n",begin);
 max = a[0];
 min = a[0];
 maxmin(1, n);
	clock_t end= clock(); 
	printf("End Time:%ld\n",end); 
 	printf ("Minimum : %d\n", min);
 	printf ("Maximum : %d\n", max);
	
   	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total);
}

void maxmin(int i, int j)
{
 int max1, min1, mid;
 if(i==j)
 {
  max = min = a[i];
 }
 else
 {
  if(i == j-1)
  {
   if(a[i] <a[j])
   {
    max = a[j];
    min = a[i];
   }
   else
   {
    max = a[i];
    min = a[j];
   }
  }
  else
  {
   mid = (i+j)/2;
   maxmin(i, mid);
   max1 = max; min1 = min;
   maxmin(mid+1, j);
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
  }  
 }
}

