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

#include <stdio.h>
#include <complex.h>
#include "include/matrix.h"
#include "include/status.h"



int main(void){
    complex_vector *vector = NULL;
    status alloc_status = complex_vector_alloc(&vector, 2);
    if (alloc_status.code == 0) {
        printf("Allocated\n");
    } else {
        printf(alloc_status.message);
        return 0;
    }
    
    for (int i = 0; i < 2; i++) {
        (vector->data)[i] = 1 + 1 * I;
        printf("vector[%d] = %.2f + %.2fi\n", i, creal((vector->data)[i]), cimag((vector->data)[i]));
    }
    
    

    status free_status = complex_vector_free(&vector);
    printf(free_status.message);
    return 0;
}