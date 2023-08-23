#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char x = get_char("Do You Agree(y/n) ");
    if (x=='y' || x=='Y')
    {
        printf("Agreed\n");
    }
    else if (x=='n' || x=='N')
    {
        printf("Not Agreed\n");
    }
}