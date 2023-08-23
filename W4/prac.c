#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%i %i",&a ,&b);
    scanf("%f %f",&c ,&d);
    int xs = a+b;
    int xd = a-b;
    
    float ys = c+d;
    float yd = c-d;
    printf("%d,%d\n",xs,xd);
    printf("%.lf,%.lf\n",ys,yd);
    
    
    return 0;
}
