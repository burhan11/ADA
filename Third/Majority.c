#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 100000
int count=0;

int main() {
	int n,i;
	printf("Enter elements\n");
	scanf("%d",&n);
	clock_t begin = clock();
	printf("Start Time:%ld\n",begin);
	int x=1000;
	int h[x];
	for(i=0;i<x;i++) {
		h[i]=0;
	}
	int a[n];
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);		
		h[a[i]]++;
	}
	int m=0;
	int num=0;
	for(i=0;i<x;i++) {
		if(m<h[i])
		{
			m=h[i];
			num=i;
		}
	}
	if(m>(n/2))
		printf("%d\n",num);
	else 
		printf("Majority element not found\n");

	clock_t end= clock(); 
	printf("End Time:%ld\n",end);
	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total);
}
