#include <stdio.h> 
 #include <time.h> 
int main() 
{ 
  int array[10000], n, c, d,swap, sp=0,comp=0; 
  printf("Enter Size\n"); 
  scanf("%d", &n); 
 clock_t begin = clock(); 
  printf("Enter elements\n"); 
  
  printf("Start Time:%ld\n",begin); 
  for (c = 0; c < n; c++) 
    array[c]=rand()%10000; 
 
  for (c=0;c<(n-1);c++) 
  { 
    for (d=0;d<n-c-1;d++) 
    { 
	comp++; 
      if (array[d] > array[d+1]) 
      { 
        swap = array[d]; 
        array[d] = array[d+1]; 
        array[d+1]= swap; 
		sp++; 
      } 
    } 
  } 
  
  
printf("Bubble Sort:\n"); 
  for (c=0;c<n;c++){ 
     printf("%d\n", array[c]); 
  } clock_t end= clock(); 
 
	

printf("Comparision:%d\n",comp); 
	printf("Swapping:%d\n",sp); 
	printf("End Time:%ld\n",end); 
   	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total ); 
} 
