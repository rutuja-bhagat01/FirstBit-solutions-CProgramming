#include<stdio.h>
#include <string.h>
void main(){
			
	// 8.strchr() = find first occ. of given char, in string
	char str[]= "Hello, World!!!";
	
	//finding 1st occ of 'o'
	char *res = strchr(str,'o');
	if(res!=NULL)
	 	printf("Character found at: %ld index",res-str);
	else
		printf("Character not found");
	
}