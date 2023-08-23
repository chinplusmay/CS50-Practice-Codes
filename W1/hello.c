#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string ans = get_string("Whats ur name");
    printf("hello, %s\n", ans);
}