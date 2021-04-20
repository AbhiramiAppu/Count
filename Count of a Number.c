/*
 ============================================================================
 Name        : Count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,count=0,number;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);
    number = num;
	while(num != 0){
		num = num / 10;
		count++;
	}
	printf("The number of digits of the number %d is = %d", number,count);
	return EXIT_SUCCESS;
}
