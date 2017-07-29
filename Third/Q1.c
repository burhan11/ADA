#include <stdio.h>
int Element(int arr[], int low, int high)
{
    if (low > high)
        return -1;
 
    int mid = (low + high) / 2;
 
    if (arr[mid] != mid + 1)
    {
        if (mid > 0 && arr[mid]==arr[mid-1])
            return mid;
 
        return Element(arr, low, mid-1);
    }
	return Element(arr, mid+1, high);
}
 
int main()
{
    int n,i;
    printf("Enter size");
    scanf("%d",&n);
    int  arr[n];
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    int index = Element(arr, 0, n-1);
    if (index!= -1)
        printf("%d",arr[index]);
}
