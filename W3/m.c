#include <stdio.h>
#include<cs50.h>
int main(void)
{
    int n =get_int("SIZE: ");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            printf("# ");
        }
        printf("\n");
    }
}