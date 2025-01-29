# Author: Diego Arturo Avila Torres <dandida95@gmail.com>

project('testbenches',['c'],version: '0.1.0',
	default_options: [],

)

add_global_arguments(language:'c')
c = meson.get_compiler('c')

# cflags
c_args = []

projectinc = [include_directories('.','include')]

src = ['main.c']

executable('main',src)
