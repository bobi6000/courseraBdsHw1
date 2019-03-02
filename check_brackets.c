/*
 * check_brackets.c
 *
 *  Created on: 28 luty 2019
 *      Author: pawe³.staniak
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


//definition of structures
typedef struct node {
    char type;
    struct node * next;
} node_t;


//function -  check characters from terminal
bool Matchc (node_t *nd, char c){
	 if (nd->type == '[' && c == ']')
	      return true;
	 if (nd->type == '{' && c == '}')
	     return true;
	 if (nd->type == '(' && c == ')')
	     return true;
	return false;
}



//main function
int main (void){

	char next=0;
	int position=0;


	while ((next=getchar())!=EOF){

		printf("%c \n",next);
		if(next=='\n')printf("Amount of brackets %d \n",position);
		else position++;
	}


	return 0;
}
