#include<stdio.h>

int indx[];
void check(int a[],int arr[],int n){
	int temp[n];
	int i,j,k=0;
    for(i=0;i<n;i++){
    	temp[i]=arr[indx[i]];
    }
    for(i=k,j=i+1;i<n-1 && j<n;i++,j++){
    	if(a[i]==a[j]){
    		k=k+2;
			if(temp[i]>temp[j]){
				int t=temp[i];
				temp[i]=temp[j];
				temp[j]=t;
			}
    	}
    	}
	printf("Sorted array: \n");
    for(i=0;i<n;i++){
    	printf("%d ",temp[i]);
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high,int index[])
{
    int pivot = arr[high];
    int i = (low - 1);
 	int j;
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swap(&index[i],&index[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    swap(&index[i + 1], &index[high]);
    return (i + 1);
}
 
void custom(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high,indx);
        custom(arr, low, pi - 1);
        custom(arr, pi + 1, high);
    }
}

int main()
{
	printf("Size of array");
	int n,i,j;
	scanf("%d",&n);
	int arr[n]; 
	printf("Enter elements\n");
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
    }
    int weight[n];
    printf("Enter weight of elements\n");
    for(i=0;i<n;i++){
    	scanf("%d",&weight[i]);
    }
    indx[n];
    for(i=0;i<n;i++){
    	indx[i]=i;
    }
    custom(weight, 0, n-1);
    check(weight,arr,n);
    
    return 0;
}

