#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int get_size(void);
    void print_grid(int size);
    int n =get_size();
    
    print_grid(n);
}


    
int get_size(void)
{
    int n =get_int("Size: ");
    return n;
}

void print_grid(int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        printf("#");
        printf("\n");
    }
}