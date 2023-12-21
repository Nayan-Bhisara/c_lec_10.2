/*
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development

Output:
Length is: 11
*/

#include<stdio.h>
#include<string.h>

int sum(){

	char a[50];
	char len=0;
	
	printf("Enter string : ");
	gets(a);
	
	len=strlen(a);
	return len;
}

void main(){
	
	int ans;
	
	ans=sum();
	printf("Lenth is : %d",ans);
	
}

/*
Enter string : development
Lenth is : 11
*/
