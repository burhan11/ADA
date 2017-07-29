#include<stdio.h>
#include<limits.h>
int function(int arr[], int n){
    int max = INT_MIN, l = 0 ,i,s=0,e=0;
    for (i = 0; i < n; i++)
	  {
        l=l+arr[i];
        if (max<l){
		 max = l;
        	e=i;}
        if (l<0){
	        l = 0;
        	s=i+1;}
    }   
    for(i=s;i<=e;i++)
    printf("%d ",arr[i]);
    return max;
}
int main(){
     int n,i;
	   scanf("%d",&n);
     int arr[n];
	   for(i=0;i<n;i++)
	     scanf("%d",&arr[i]);
       int res = function(arr, n);
     printf("\nMaximum sum is %d", res);
       return 0;
}
