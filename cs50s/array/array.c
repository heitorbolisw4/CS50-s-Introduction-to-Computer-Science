#include <stdio.h>


int main(void)
{
    char words[20] = "Heitor";
    

    printf("%s %s %s\n", &words[5], &words[4],&words[3]);
}