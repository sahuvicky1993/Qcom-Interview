#include <stdio.h>
#include <stdbool.h>
bool isSpace(char p)
{
    return (p==' ') ? true : false ;
}

int main() {
	//code
	int  T;
	char *s=malloc(1000);
	char *p;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    scanf("%[\^n]", s );
	    p=s;
	    for(int j=0;p[j];j++)
	    if(isSpace(*p))
	    p++;
	    else
	    *s=*p;
	    
	}
	return 0;
}
