#include<stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);         //print address of  s// 
    printf("%p\n", &s[0]);    //print address of  s[0]//
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);   //address of \0 null char// 
}   


/*   (&) ampersend--> figure out the address of something
     (*) asterisk--> go to address of something  */