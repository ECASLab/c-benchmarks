
#pragma once
#include "include/status.h"
#include <stddef.h>
#include <stdlib.h>

typedef struct im {
	size_t rows;
	size_t columns;
	int **data;
} int_matrix;


status int_matrix_alloc(int_matrix **input,size_t rows,size_t columns);
status int_matrix_free(int_matrix **input);
status int_matrix_sum(int_matrix **input1, int_matrix **input2, int_matrix **output);
// status int_matrix_multiplication();
