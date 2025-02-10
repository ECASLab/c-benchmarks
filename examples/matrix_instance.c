

#include "include/matrix.h"
#include "include/status.h"
#include <stdio.h>

int main(void){
	int_matrix *matrix = NULL;
	const unsigned int rowsAndColumns = 2;
	status alloc_status = int_matrix_alloc(&matrix,rowsAndColumns,rowsAndColumns);
	/*
	if(alloc_status.code==0){
		printf("success \n");
	}
	*/
	printf("%p\n",matrix);

	for(int i = 0; i<rowsAndColumns; i++){
		for(int j = 0; j<rowsAndColumns; j++){
			(matrix->data)[i][j] = 1;
		}
	}
	printf("%i\n",matrix->data[0][0]);
	printf("%i\n",matrix->data[0][1]);
	printf("%i\n",matrix->data[1][0]);
	printf("%i\n",matrix->data[1][1]);

	status free_status = int_matrix_free(&matrix);
	printf(free_status.message);
	return 0;
}
