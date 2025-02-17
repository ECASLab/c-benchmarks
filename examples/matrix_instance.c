

#include "include/matrix.h"
#include "include/status.h"
#include <stdio.h>

int main(void){
	int_matrix *matrix_one = NULL;
	int_matrix *matrix_two = NULL;
	int_matrix *output = NULL;
	const unsigned int rowsAndColumns = 2;
	status alloc_status_one = int_matrix_alloc(&matrix_one,rowsAndColumns,rowsAndColumns);
	status alloc_status_two = int_matrix_alloc(&matrix_two,rowsAndColumns,rowsAndColumns);
	status alloc_status_output = int_matrix_alloc(&output,rowsAndColumns,rowsAndColumns);
	if(alloc_status_one.code==0&&alloc_status_two.code==0&&alloc_status_output.code==0){
		printf("success \n");
	}else{
		printf(alloc_status_one.message);
		return 0;
	}


	for(int i = 0; i<rowsAndColumns; i++){
		for(int j = 0; j<rowsAndColumns; j++){
			(matrix_one->data)[i][j] = 1;
			(matrix_two->data)[i][j] = 1;
		}
	}


	status sum_status =  int_matrix_sum(&matrix_one,&matrix_two,&output);

	printf(sum_status.message);
	for(int i = 0; i<rowsAndColumns; i++){
		for(int j = 0; j<rowsAndColumns; j++){
			printf("%i\n",(matrix_one->data)[i][j]);
			printf("%i\n",(matrix_two->data)[i][j]);
			printf("%i\n",(output->data)[i][j]);
		}
	}
	status free_status = int_matrix_free(&matrix_one);
	free_status = int_matrix_free(&matrix_two);
	free_status = int_matrix_free(&output);
	printf(free_status.message);
	return 0;
}
