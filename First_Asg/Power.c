#include<stdio.h>
float power1(float x, int y)
{
    if( y == 0)
       return 1;      
    if (y%2 == 0)
        return power1(x, y/2)*power1(x, y/2);
    else
    {
        if(y > 0)
            return x*power1(x, y/2)*power1(x, y/2);
        else
            return (power1(x, y/2)*power1(x, y/2))/x;
    }
}
int main()
{
    float x;
    int y;
 	printf("Enter x and y");
	scanf("%f %d",&x,&y);	
    printf("%f\n",power1(x,y));
    return 0;
}
