#include<stdio.h>

void rev_str(char*p,int s,int e){
char temp;
if(s<e){
temp=p[s];p[s]=p[e];p[e]=temp;
rev_str(p,s++,e--);
}

}

main(){
char s[]="vivek";

rev_str(s,0,strlen(s)-1);
printf("%s\n",s);

}
