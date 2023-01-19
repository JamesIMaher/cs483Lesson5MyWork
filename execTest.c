#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void main (){
	const int _LINE_LEN = 100;

	printf("Enter a command you would like exected, destroying the current process: \n");
	char *buf = malloc(sizeof(char) *  _LINE_LEN);
	fgets(buf, _LINE_LEN - 1, stdin);

	char *argv[50];

	char *token = malloc(sizeof(char) * _LINE_LEN);
	token = strtok(buf, " ");
	int tokenLoc = 0;

	while(token != NULL){
		argv[tokenLoc] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[tokenLoc], token);
		tokenLoc++;
		token = strtok(NULL, " ");
	}

	for(int i = 0; i<tokenLoc; i++){
		printf("Token: %s\n",argv[i]);
	}

	//Create the argument array
}

