#include <stdio.h>
#include <stdlib.h>
 
#define ARRAYSIZE(a) (sizeof(a))/(sizeof(a[0]))
 
void printSubset(int A[], int size){
	int i;
    for(i = 0; i < size; i++)        printf("%d\t", A[i]);
    printf("\n");
}
 
void subset_sum(int s[], int t[], int s_size, int t_size, int sum, int ite, int const target_sum){
    if( target_sum == sum ){
        printSubset(t, t_size);
        subset_sum(s, t, s_size, t_size-1, sum - s[ite], ite + 1, target_sum);
        return;
    }
    else{
    	int i; 
        for( i = ite; i < s_size; i++ ){
            t[t_size] = s[i];
            subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
        }
    }
}
 
void generateSubsets(int s[], int size, int target_sum){
    int *tuplet_vector = (int *)malloc(size * sizeof(int));
    subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);
    free(tuplet_vector);
}
 
int main(){
    int array[] = {3,5,7,4,1,8,3,7,5,9,5,2,4};
    int size = ARRAYSIZE(array);
    generateSubsets(array, size,13);
    return 0;
}
