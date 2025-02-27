/*
 * This file is part of the C Benchmarks project.
 * 
 * Licensed under the MIT License. See LICENSE file in the project root for full license information.
 * 
 * Authors: 
 * Diego Avila <dandida95@gmail.com>
 * Luis G. Leon Vega <luis.leon@ieee.org>
 */

#include "include/status.h"
#include "include/matrix.h"
#include <stdlib.h>
#include <stdio.h>

status int_matrix_alloc(int_matrix **input,size_t rows,size_t columns){
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

	matrix->rows = rows;
	matrix->columns = columns;
	matrix->data = (int**)malloc(rows*sizeof(int*));
	for(size_t i= 0; i<rows; i++){
		(matrix->data)[i] = (int*)malloc(columns*sizeof(int));
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
	// printf("test");
	status output = {0, "OK"};

	if(input==NULL){

		output.code = -1;
		output.message = "Object has not been assigned memory.";
		return output;
	}
	for(size_t i = 0; i<(*input)->rows; i++){
		free((*input)->data[i]);
	}
	free((*input)->data);
	free((*input));
	return output;
}

status int_matrix_sum(int_matrix **input1, int_matrix **input2, int_matrix **output){
	status returned = { 0 , "OK \n" };
	if(*input1==NULL||*input2==NULL||*output==NULL){
		returned.code = -1;
		returned.message = "All the int_matrix pointers have to be allocated. \n";
		return returned;
	}

	if
	(
		((*input1)->rows)!=(*input2)->rows
		||(*input1)->columns!=(*input2)->columns
		||(*input1)->rows!=(*output)->rows
		||(*input1)->columns!=(*output)->columns
		||(*input2)->rows!=(*output)->rows
		||(*input2)->columns!=(*output)->columns
	)
	{
		returned.message = "Rows and Columns have to match in length. \n";
		returned.code = -1;
		return returned;
	}

	for(size_t i = 0; i<(*output)->rows; i++){
		for(size_t j = 0; j<(*output)->columns; j++){
			(*output)->data[i][j] = (*input1)->data[i][j]+(*input2)->data[i][j];
		}
	}

	return returned;
}
