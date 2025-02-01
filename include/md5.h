/*
	Author: Diego Avila diego.avila@uned.cr
*/
#pragma once

#include <stdint.h>
#include <string.h>


unsigned int leftRotate(unsigned int x, unsigned int n);

void md5(const uint8_t *initial_msg, size_t len, uint8_t *digest);

void print_md5(uint8_t *digest);

uint32_t F(uint32_t X, uint32_t Y, uint32_t Z);

uint32_t G(uint32_t X, uint32_t Y, uint32_t Z);

uint32_t H(uint32_t X, uint32_t Y, uint32_t Z);

uint32_t I(uint32_t X, uint32_t Y, uint32_t Z);
