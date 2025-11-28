#include <stdio.h>

// constant
const int N = 3;

// prototype
float calc(int length, int array[]);

int main (void)
{
    // get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        scanf("%d", &scores[i]);
    }
    printf("Average: %f\n", calc(N, scores));
}
float calc(int length, int array[])
{
        
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}

