# C Benchmarks

This repository contains a collection of benchmarks for C programs. 
The benchmarks are designed to test a set of custom risc-v core 
designs with algorithms and data structures implemented in the 
C programming language.

## Table of Contents

- [Introduction] (#introduction)
- [Benchmarks] (#benchmarks)
- [Installation] (#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The purpose of this repository is to provide a set of benchmarks that can 


## Benchmarks

The benchmarks included in this repository cover a range of topics, including:

- Sorting algorithms (to be implemented)
- Search algorithms (to be implemented)
- Data structures (to be implemented)
- Mathematical computations (partial implementation)

## Installation

To use the benchmarks, clone the repository to your local machine:

```sh
git clone https://github.com/your-username/c-benchmarks.git
cd c-benchmarks
```

## Dependencies
- gcc 11.4.0 or higher
- meson 1.7.0 or higher
- cpp-check 2.7
- clang-format 14.0
- c23

## Usage

To build and run the benchmarks using the Meson build system, follow these steps:

1. Install Meson and Ninja if you haven't already:

```sh
pip install meson
pip install ninja
```

2. Configure the build directory:

```sh
meson setup builddir
```

3. Build the benchmarks:

```sh
meson compile -C builddir
```

4. Run the benchmarks:

A set of working examples thats compiled can be found in the builddir directory,
you can find the source code for this binary executables in the folder of the same name
in this repository.

```sh
gcc -o benchmark benchmark.c
./benchmark
```

## Maintainers

  - Diego Avila <dandida95@gmail.com>
  - Luis G. Leon Vega <luis.leon@ieee.org>

## License

This repository is licensed under the GPL v2.1 License. 
See the [LICENSE](LICENSE) file for more information.