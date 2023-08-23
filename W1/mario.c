/* #include <stdio.h>    #for vertical and horizontal lines (if vertical then\n if horizontal then nothing)
int main(void)
{
    for(int i= 0; i<5;i++)
    printf("#\n");
}*/
#include <stdio.h>
#include<cs50.h>
int main(void)
{
    int n =get_int("SIZE: ");      /*const int n=4; also*/
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        printf("#");
        printf("\n");
         
    }

}