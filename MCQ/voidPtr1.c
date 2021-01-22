#include <stdio.h>

int main()
{
    
    int a=2;
    void*v=&a;
    printf("%d",*v);

    return 0;
}

//printf("%d",*((int*)v));
