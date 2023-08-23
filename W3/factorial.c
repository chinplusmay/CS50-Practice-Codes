#include<cs50.h>
#include<stdio.h>

int f(int n);        //HERE

int main(void)
{
    const int n =get_int("No: ");
    printf("Factorial is %i\n",f(n));
}


int f(int i)         //HERE    
{
    if(i==1 || i==0)
    {
        return 1;
    }
    else
    {
        return i * f(i-1);
    }
}