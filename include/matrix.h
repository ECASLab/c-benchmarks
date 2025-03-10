/*
 * This file is part of the C Benchmarks project.
 *
 * Licensed under the GPL v2.1 License.
 * See LICENSE file in the project root for full
 * license information.
 *
 * Authors:
 * Diego Avila <dandida95@gmail.com>
 * Luis G. Leon Vega <luis.leon@ieee.org>
 * Karin Porras Clarke <karinyume1293@gmail.com>
 * 
 */

#pragma once
#include <stddef.h>
#include <stdlib.h>
#include <complex.h>
#include "include/status.h"

typedef struct im {
  size_t rows;
  size_t columns;
  int **data;
} int_matrix;

typedef struct vm {
  size_t size;
  complex double *data;
} complex_vector;

/*
typedef struct cm {
  size_t rows;
  size_t columns;
  complex **data;
} complex_matrix;
*/

status int_matrix_alloc(int_matrix **input, size_t rows, size_t columns);
status int_matrix_free(int_matrix **input);

status int_matrix_sum(int_matrix **input1, int_matrix **input2,
                      int_matrix **output);

status int_matrix_multiplication(int_matrix **input1, int_matrix **input2,
                                 int_matrix **output);

status complex_vector_alloc(complex_vector **input, size_t size);

status complex_vector_free(complex_vector **input);

// status complex_matrix_alloc(complex_matrix **input, size_t rows, size_t columns);
// status complex_matrix_free(complex_matrix **input);