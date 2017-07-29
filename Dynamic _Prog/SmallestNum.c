/*How to find the smallest number with given digit sum s and number of digits d*/
#include <stdio.h>

int main()
{
    int sum,digit;
    scanf("%d %d",&sum,&digit);
    Smallest(digit,sum);
    return 0;
}

void Smallest(int n,int s)
{
    if (s>9*n)
    {
        printf("Enter valid number");
        return ;
    }
    int res[n];
    s=s-1;
    for (int i=n-1;i>0;i--)
    {
        if (s>9)
        {
            res[i]=9;
            s=s-9;
        }
        else
        {
            res[i]=s;
            s=0;
        }
    }
 	res[0]=s+1;  
    for (int i=0;i<n;i++)
        printf("%d",res[i]);
}

