#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int MaxJump(int a[],int l,int r,int * m,int * mi) {
    int max = *m;
	int min = *mi;
    int diff=0;
    if(l==r) {
        max=min=a[l];
        diff=0;
    } else if (l == (r-1)) {
        diff = a[r]-a[l];
        if(a[l]>a[r]) {
			max=a[l];
			min=a[r];			
		} else {
			min=a[l];
			max=a[r];
		}
    } else {
        int max1,min1;
        int mid = l + (r-l)/2;
        int diff1,diff2,diff3;
        diff1=MaxJump(a,l,mid,&max,&min);
        diff2=MaxJump(a,mid+1,r,&max1,&min1);
        diff3=max1-min;
        if(diff1>diff2) {
            if(diff1>diff3) {
                diff=diff1;                
            } else {
                diff=diff3;
                max=max1;                
            }
        } else {
            if(diff2>diff3) {
                diff=diff2;
                max=max1;
                min=min1;
            } else {
                diff=diff3;
                max=max1;                
            }
        }        
    }
    *m = max;
    *mi = min;
    return diff;
}

int main() {
    printf("Enter Size\n");
	int n,i;	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	clock_t begin = clock();
	printf("Start Time:%ld\n",begin);
	int max;
	int min;
	int diff = MaxJump(a,0,n-1,&max,&min);
	clock_t end= clock(); 
	printf("End Time:%ld\n",end);
	printf("diff: %d \n",diff);
	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total);
}
