#include<stdlib.h>
#include<stdio.h>
#include<cs50.h>

void swap(int * a,int * b);
int main(void)
{
    int x = get_int("x:");
    int y = get_int("y:");
    printf("x is %i, y is %i\n",x,y);
    swap(&x,&y);
    printf("x is %i, y is %i\n",x,y);
}    


//Funtion Swap
void swap(int *a , int * b)
{
    int tmp = *a;
    *a=*b;
    *b=tmp;
}
