 #include <stdio.h>
 
int main()
{
  int array[100], n, c, d,swap, sp=0,comp=0,pos;
  printf("Enter Size\n");
  scanf("%d", &n);
 
  printf("Enter elements\n");
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]); 
for (c=0;c<(n-1);c++)
   {
      pos=c;
 
      for (d=c+1;d<n;d++)
      { 
	 comp++;
         if ( array[pos] > array[d] )
            pos = d;
      }
      if (pos!=c)
      { 
         swap = array[c];
         array[c] = array[pos];
         array[pos] = swap;
	 sp++;
      }
   }
 
   printf("Selection Sort:\n");
   for (c=0;c<n;c++ )
      printf("%d\n", array[c]);
 printf("Comparision:%d\n",comp);
 printf("Swapping:%d\n",sp);
}
