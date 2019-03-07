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

node_t* stack;

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

void PushFront (node_t **head, char c){

	node_t *newNode;
	newNode=malloc(sizeof(node_t));
	newNode->type=c;
	newNode->next=*head;
}

void PrintList (node_t* stack){

	node_t* current=stack;

	while (current!=NULL){
		printf("%c \n",current->type);
		current=current->next;
	}
}

//main function
int main (void){

	char next=0;
	int position=0;


	while ((next=getchar())!=EOF){
		PushFront(&stack,next);
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
	PrintList(&stack);


	return 0;
}
