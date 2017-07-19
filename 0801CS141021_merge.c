#include<stdio.h>
#include<time.h>
 
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
int main()
{
    int a[100000],n,i;
    printf("Enter Size:");
    scanf("%d",&n);
    clock_t begin = clock();
    printf("Start Time:%ld\n",begin);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        a[i]=rand()%100000;
        
    mergesort(a,0,n-1);
    
    printf("Sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);}
	clock_t end= clock();
	printf("End Time:%ld\n",end); 
   	double total = (double)(end- begin)/CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total ); 
	printf("\n");
        
    return 0;
}
 
void mergesort(int a[],int i,int j)
{
    int mid;
        
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid); 
        mergesort(a,mid+1,j);   
        merge(a,i,mid,mid+1,j);   
    }
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];   
    int i,j,k;
    i=i1;    
    j=i2; 
    k=0;
    
    while(i<=j1 && j<=j2)   
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1) {   
        temp[k++]=a[i++];}
        
    while(j<=j2)    {
        temp[k++]=a[j++];}
        
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
