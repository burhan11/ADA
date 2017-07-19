#include <stdio.h> 
#include<time.h> 
void quick_sort(int[],int,int); 
int partition(int[],int,int); 
 
int main() 
{ 
    int a[10000],n,i; 
    printf("Enter Size:"); 
    scanf("%d",&n); 
     clock_t begin = clock(); 
     printf("Start Time:%ld\n",begin); 
    printf("Enter elements:"); 
    
    for(i=0;i<n;i++) 
       a[i]=rand()%10000; 
        
    quick_sort(a,0,n-1); 
    printf("Quick Sort:\n"); 
    
    for(i=0;i<n;i++){ 
        printf("%d\n",a[i]);}  
     clock_t end= clock();    
    printf("End Time:%ld\n",end); 
   	double total = (double)(end- begin)/ CLOCKS_PER_SEC; 
   	printf("Total time taken by CPU: %lf\n", total );    
    
    return 0;        
} 
 
void quick_sort(int a[],int l,int u) 
{ 
    int j; 
    if(l<u) 
    { 
	comp++;
        j=partition(a,l,u); 
        quick_sort(a,l,j-1); 
        quick_sort(a,j+1,u); 
    } 
} 
 
int partition(int a[],int l,int u) 
{ 
    int v,i,j,temp,sp=0; 
    v=a[l]; 
    i=l; 
    j=u+1; 
    
    do 
    { 
        do 
            i++; 
            
        while(a[i]<v&&i<=u); 
        
        do 
            j--; 
        while(v<a[j]); 
        
        if(i<j) 
        { 
            temp=a[i]; 
            a[i]=a[j]; 
            a[j]=temp; 
	    sp++; 
        } 
    }while(i<j); 
    
    a[l]=a[j]; 
    a[j]=v; 
    printf("%d",sp); 
    return(j); 
}
