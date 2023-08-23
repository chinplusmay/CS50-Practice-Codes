#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    string name;
    int number;
}
person;
   

int main(void)
{
    person ppl[2];
    ppl[0].name = "Chin";
    ppl[0].number = 8222;
    ppl[1].name = "Zaid";
    ppl[1].number = 8588;
    string name =get_string("Name: ");
    for(int i = 0; i<2; i++)
    {
        if (strcmp(ppl[i].name,name)==0)
        {
            printf("Found......\tNumber: %i\n", ppl[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}