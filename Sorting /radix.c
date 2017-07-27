#include<stdio.h> 
#include<time.h> 
int largest(int a[], int n) 
{ 
    int large = a[0], i; 
    for(i = 1; i < n; i++) 
    { 
        if(large < a[i]) 
            large = a[i]; 
    } 
    return large; 
} 


void RadixSort(int a[], int n) 
{ 
    int bucket[10][10], bucket_count[10]; 
    int i, j, k, remainder, NOP=0, divisor=1, large, p; 

    large = largest(a, n); 
    while(large > 0) 
    { 
        NOP++; 
        large/=10; 
    } 

    for(p = 0; p < NOP; p++) 
    { 
        for(i = 0; i < 10; i++) 
        { 
            bucket_count[i] = 0; 
        } 
        for(i = 0; i < n; i++) 
        { 
            remainder = (a[i] / divisor) % 10; 
            bucket[remainder][bucket_count[remainder]] = a[i]; 
            bucket_count[remainder] += 1; 
        } 

        i = 0; 
        for(k = 0; k < 10; k++) 
        { 
            for(j = 0; j < bucket_count[k]; j++) 
            { 
                a[i] = bucket[k][j]; 
                i++; 
            } 
        } 
        divisor *= 10; 
    } 
} 
 
int main() 
{ 
    int i, n, a[100000]; 
    printf("Enter Size: "); 
    scanf("%d",&n); 
     clock_t begin = clock(); 
     printf("Start Time:%ld\n",begin); 
    for(i = 0; i < n; i++) 
    { 
        a[i]=rand()%100000; 
    } 
    RadixSort(a,n); 
    printf("Radix Sort:\n"); 
    for(i = 0; i < n; i++) 
        printf("%d  ",a[i]); 
    clock_t end= clock(); 
    printf("\nEnd Time:%ld\n",end); 
    double total = (double)(end- begin)/ CLOCKS_PER_SEC; 
    printf("Total time taken by CPU: %lf\n", total ); 
}
