#include<stdio.h>
int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}


/*   (&) ampersend--> figure out the address of something


      (*) asterisk--> go to address of something  */ 