#include <stdio.h>

int get_positive_int(void);
void call(int n);


int main(void)
{
    int times = get_positive_int();
    call(times);


}

int get_positive_int(void)
{
    int n;
    do
    {
        printf("type a number: ");
        scanf("%49d", &n);    
    }
    while(n < 0);
    return n;
}

void call(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ring ring...\n");
    }
}