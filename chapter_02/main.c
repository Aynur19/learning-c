#include <stdio.h>


void swap(int * ptrA, int * ptrB)
{
    int t = *ptrA;
    *ptrA = *ptrB;
    *ptrB = t;
    return;
}


int main(void)
{
    int a = 21;
    int b = 17;

    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}

