#include <stdio.h> 
#include<time.h> 
int main() 
{ 
  int n,array[10000],c,d,temp,sp=0,comp=0; 
  printf("Enter Size\n"); 
  scanf("%d", &n); 
   clock_t begin = clock(); 
  printf("Enter elements\n"); 
  
  for (c=0;c<n;c++) 
  { 
   array[c]=rand()%10000; 
  } 
  for (c=1;c<=n-1;c++) 
  { 
    d=c; 
    comp++; 
    while (d>0 && array[d]<array[d-1]) 
    { 
      temp= array[d]; 
      array[d]=array[d-1]; 
      array[d-1]=temp; 
      sp++; 
      d--; 
    } 
  } 
  printf("Insertion sort:\n"); 
  for (c=0;c<=n-1;c++) { 
    printf("%d\n", array[c]); 
  } 
  clock_t end= clock(); 
    printf("Comparision:%d\n",comp); 
    printf("Swapping:%d\n",sp); 
    printf("End Time:%ld\n",end); 
   	double total = (double)(end- begin)/ CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total ); 
}
