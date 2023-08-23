#include<string.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("String: ");
    for(int i = 0; i<strlen(s);i++)
    {
        if (s[i]>97 && s[i]<122)
        {
        s[i]=s[i]-32;
        }
    }
    printf("Now:  %s\n", s);


}
