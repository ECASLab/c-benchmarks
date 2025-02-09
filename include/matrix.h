
#pragma once
#include "include/status.h"
#include <stddef.h>
#include <stdlib.h>

typedef struct im {
	size_t rows;
	size_t columns;
	int **data;
} int_matrix;


status int_matrix_alloc(int_matrix *input,const unsigned int rows,const unsigned int columns);
status int_matrix_free(int_matrix *input);
