/* Jared Wasserman -- vowels.c */
/*This program asks the user for a string then removes all the vowels are returns the new string.*/
#include <stdio.h>
#include <string.h>

int main(){

	printf("Enter a string of input: ");
	char string[100];

	fgets(string,sizeof(string),stdin);
	string[strlen(string)-1]='\0';

	char newstring[sizeof(string)/sizeof(string[0])];
	int pos = 0;
	
	int i;
	for(i=0;i<(sizeof(string)/sizeof(string[0]));i++){
		char letter = string[i];
		if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
		}else if(letter=='\0'){
			newstring[pos]='\0';
			break;
		}else{
			newstring[pos]=string[i];
			pos++;		
		}	
	}

	printf("\n%s\n\n",newstring);

return 0;
}
