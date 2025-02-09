

#include "include/status.h"
#include "include/matrix.h"

status int_matrix_alloc(int_matrix *input,const unsigned int rows,const unsigned int columns){
	status output = {0, "OK"};
	int_matrix *matrix = (int_matrix*)malloc(sizeof(int_matrix));
	matrix->rows = sizeof(int)*rows;
	matrix->columns = sizeof(int)*columns;
	matrix->data = (int**)malloc(matrix->rows);
	for(int i= 0; i<rows; i++){
		(matrix->data)[i] = (int*)malloc(matrix->columns);
		if((matrix->data)[i]==NULL){
			output.code = -1;
			output.message = "NOT OK";
			return output;
		}
	}
	return output;
}
