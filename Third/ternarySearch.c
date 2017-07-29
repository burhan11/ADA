#include <stdio.h>
int main()
{
    int n;
	  scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&i);
    int q = Search(a,0,n-1,i);
        printf("%d\n",q);
}

int Search(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
    		int mid = l + (r - l)/3;
    		if (arr[mid] == x) 
					return mid;
    		if (arr[mid] > x) 
					return Search(arr, l, mid-1, x);
    			return Search(arr, mid+1, r, x);
    }
}
