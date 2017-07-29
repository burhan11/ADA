#include <stdio.h>
#include<time.h>
int main() {
    int n,q;
	scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++) {
       scanf("%d",&a[i]);
    }
		clock_t begin = clock();
	printf("Start Time:%ld\n",begin);
    	scanf("%d",&i);
	q=Search(a,i,0,n-1);
    	printf("%d\n",q-1);
	clock_t end= clock(); 
	printf("End Time:%ld\n",end); 
   	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total);
}

int Search(int a[],int x,int l,int r) 
{
        int mid = l + (r-l)/3;
        int mid1 = l + 2*(r-l)/3;
        if(a[mid]==x)
            return x;        
        else if(a[mid]>x)
            Search(a,x,l,mid-1);            
        else if(a[mid1]==x)
            return x;        
        else if(a[mid1]>x)
            Search(a,x,mid+1,mid1-1);
        else
            Search(a,x,mid1+1,r);
}


