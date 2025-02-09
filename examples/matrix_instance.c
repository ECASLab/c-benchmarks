

#include "include/matrix.h"
#include "include/status.h"
#include <stdio.h>

int main(void){
	int_matrix *matrix;
	const unsigned int rowsAndColumns = 2;
	status alloc_status = int_matrix_alloc(matrix,rowsAndColumns,rowsAndColumns);
	if(alloc_status.code==0){
		printf("success \n");
	}
	printf("%p\n",matrix);
	return 0;
}
