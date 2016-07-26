/* Jared Wasserman -- unique.c */
/*This program takes a string of user input and returns wether or not all of the character in the string are unique.*/

#include <stdio.h>
#include <string.h>

int main(){
	printf("Enter a string: ");
	char input[100];
	fgets(input,sizeof(input),stdin);
	input[strlen(input)-1]='\0';
	int unique=1;

	int i;
	for(i=0;i<strlen(input);i++){
		if(unique){
			int x;
			for(x=i+1;x<strlen(input);x++){
				if(input[i]==input[x]){
					unique=0;
					break;
				}
			}
		}else{
			break;
		}
	}

	if(unique){
		printf("\"%s\" has all unique characters\n",input);
	}else{
		printf("\"%s\" does not have all unique characters\n",input);
	}

return 0;
}
