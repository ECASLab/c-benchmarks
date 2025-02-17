
project_inc += [include_directories('.')]

matrix_instance_src = [files('matrix_instance.c')]

src += matrix_instance_src

matrix_instance_exe = executable('matrix-instance-example',
	matrix_instance_src,
	include_directories: [project_inc],
	c_args: ['-std=c23','--optimize=g','-mavx','-Ofast'],
	dependencies: [project_deps]
	)
