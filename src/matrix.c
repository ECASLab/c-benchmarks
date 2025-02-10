

#include "include/status.h"
#include "include/matrix.h"
#include <stdlib.h>
#include <stdio.h>

status int_matrix_alloc(int_matrix **input,const unsigned int rows,const unsigned int columns){
	status output = {0, "OK"};

	if(rows<=1||columns<=1){
		output.code = -1;
		output.message = "Rows and columns only accepts positive integers greater than 1";
		return output;
	}
	// printf("im here");
	if(*input!=NULL){
		printf("same");
		output.code = -1;
		output.message = "Object has already been assigned memory.";
		return output;
	}


	int_matrix *matrix = (int_matrix*)malloc(sizeof(int_matrix));

	matrix->rows = sizeof(int)*rows;
	matrix->columns = sizeof(int)*columns;
	matrix->data = (int**)malloc(matrix->rows);
	for(int i= 0; i<rows; i++){
		(matrix->data)[i] = (int*)malloc(matrix->columns);
		// printf("%p\n",(matrix->data)[i]);
		if((matrix->data)[i]==NULL){
			output.code = -1;
			output.message = "NOT OK";
			return output;
		}
	}
	*input = matrix;
	return output;
}

status int_matrix_free(int_matrix **input){
	printf("test");
	status output = {0, "OK"};

	if(input==NULL){
		printf("test");
		output.code = -1;
		output.message = "Object has not been assigned memory.";
		return output;
	}
	// printf("%i\n",*((*input)->rows/sizeof(int)));
	for(int i = 0; i<(*input)->rows/sizeof(int); i++){
		// printf("Test");
		free((*input)->data[i]);
	}

	// printf("Test");
	// free(*((*input)->data));
	// printf("Test");
	free(*input);
	return output;
}
