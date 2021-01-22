#include <stdio.h>
int a=9;
int y=7;
int main()
{
    
    int a=a;
    static int y;
    y=y;
    void*v=&a;
    printf("%d %d",a,y);

    return 0;
}

// G 0
