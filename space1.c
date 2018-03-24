#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>


bool isSpace(char p)
{
    return (p==' ') ? true : false ;
}

int main() {
	//code
	int  T,k=0;
	char s[1000];
	char *p;
	scanf("%d",&T);
	while(T--){//for(int i=0;i<T;i++){
	    scanf("%[\^n]", s );
	  p=s;
	  k=0;
	  while(*p++)//for(int j=0;p[j];j++)
	  {
	      if(isSpace(*p))
	      ;//p++;
	      else
	      s[k++]=*p;
	  }
		s[k]='\0';
		printf("%s",s);
	}
	return 0;
}
