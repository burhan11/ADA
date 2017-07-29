#include<stdio.h>
#include<string.h>
int max (int x, int y) {
	if(x>y) return x;
	else	return y;
}
int palindrome(char *str){
   int n = strlen(str);
   int i, j, k;
   int L[n][n];  
   for (i = 0; i < n; i++)      L[i][i] = 1;
    for (k=2; k<=n; k++){
        for (i=0; i<n-k+1; i++){
            j = i+k-1;
            if (str[i] == str[j] && k == 2)               
		L[i][j] = 2;
            else if (str[i] == str[j])		               
		L[i][j] = L[i+1][j-1] + 2;
           else							               
		L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
    return L[0][n-1];
}
int main()
{
    char string[] = "abfghdedkkllba";
    int n = strlen(string);
    printf ("The max palindrome length is %d\n",palindrome(string));
    getchar();
    return 0;
}
