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
 struct node {
    char type;
    struct node * next;
};
 typedef struct node node_t;

node_t stack;

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

void PushStack (node_t st, char c){

	st.=malloc(sizeof(char));
}

//main function
int main (void){

	char next=0;
	int position=0;


	while ((next=getchar())!=EOF){

		printf("%c \n",next);
		if(next=='\n')printf("Amount of brackets %d \n",position);
		else position++;

		 if (next == '(' || next == '[' || next == '{') {
		            // Process opening bracket, write your code here
		        }

		        if (next == ')' || next == ']' || next == '}') {
		            // Process closing bracket, write your code here
		        }

	}


	return 0;
}
