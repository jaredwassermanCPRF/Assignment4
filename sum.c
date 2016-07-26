/* Jared Wasserman -- sum.c */
/*This program asks the user for the length of the array then for each integer for the array. Then it returns a new array in which each value is the sum of all the previous values.*/

#include <stdio.h>

int main(){
	printf("Enter length of array: ");
	int length;
	scanf("%d",&length);
	int arr[length];
	int i;
	for(i=0;i<length;i++){
		printf("Enter a number: ");
		int num;
		scanf("%d",&num);
		arr[i]=num;
	}

	int newarr[sizeof(arr)/sizeof(arr[0])];

	for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
		int sum=0;
		int x;
		for(x=0;x<=i;x++){
			sum+=arr[x];
		}
		newarr[i]=sum;
	}
	
	for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
		printf("%d ",newarr[i]);
	}
	printf("\n");
    
return 0;
}
