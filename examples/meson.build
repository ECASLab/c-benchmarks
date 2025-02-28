# This file is part of the C Benchmarks project.
# 
# Licensed under the GPL v2.1 License. 
# See LICENSE file in the project root for full license information.
# 
# Authors: 
# Diego Avila <dandida95@gmail.com>
# Luis G. Leon Vega <luis.leon@ieee.org>
#

project_inc += [include_directories('.')]

matrix_instance_src = [files('matrix_instance.c')]
matrix_multiply_src = [files('matrix_multiply.c')]

src += matrix_instance_src
src += matrix_multiply_src

matrix_instance_exe = executable('matrix-instance-example',
	matrix_instance_src,
	include_directories: [project_inc],
	c_args: ['-std=c2x','-mavx','-Ofast', c_args],
	dependencies: [project_deps]
)

matrix_multiply_exe = executable('matrix-multiply-example',
	matrix_multiply_src,
	include_directories: [project_inc],
	c_args: ['-std=c2x','-mavx','-Ofast', c_args],
	dependencies: [project_deps]
)