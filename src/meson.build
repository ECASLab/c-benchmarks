sources = []

# subdir('testbenches')

project_inc += [include_directories('.')]

sources += [files('gcd.c')]
libgcd_src = [files('gcd.c')]
libmd5_src = [files('md5.c')]
sources += [libmd5_src]


lib_gcd = shared_library('gcd',
libgcd_src,
include_directories: [project_inc],
install: true,
dependencies: [project_deps]
)

lib_md5 = shared_library('mcd',
libmd5_src,
include_directories: [project_inc],
install: true,
dependencies: [project_deps]
)

# gcd_dep = declare_dependency(link_with: lib_gcd,required: true)

shared_libs += [lib_gcd,lib_md5]

#project_deps += [gcd_dep]

src += sources
