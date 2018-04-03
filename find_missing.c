#include<stdio.h>
#include<stdlib.h>
/*
There is a array of size 20 contains no from 1 to 20
Find the missing no in the array bw 1 to 20
Print NILL if no number missing 
*/

void find(int b[]){
	// we know the size of b is 20

	int *temp=calloc(sizeof(int),21);   // Use Hash table concept
	int i,c=0;
	for( i=0;i<20;i++)
	{
		temp[b[i]]++;
	}
	for( i=0;i<20;i++)
	{
		if(i && temp[i]==0)
			printf("%d ",i);
		else
			c++;
	}
	if((c-1)==0)    // at temp[0] there is a zero by defualt. dont consider it
	printf("NILL");
	printf("\n");
}

main(){
	int a[]={1,2,3,5,1,8,9,11,12,13,15,18,19,20,15,14,2,3,5,20};

	find(a);


}
