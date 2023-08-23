/*#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int scores[3];
    for (int i = 0; i<3 ; i++)
    {
        scores[i]= get_int("Scores: ");
    }
    printf("Avg: %f\n", (scores[0]+scores[1]+scores[2] / (float)3));
}*/



#include<stdio.h>
#include<cs50.h>
const int N = 3;0


float avg(int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i<N ; i++)
    {
        scores[i]= get_int("Scores: ");
    }
    printf("Avg: %f\n", avg(scores) );
}    


float avg(int array[])
{
    int sum=0;
    for(int i = 0; i<N; i++)
    {
        sum=sum+array[i];
    }
    return sum / (float) N;

}