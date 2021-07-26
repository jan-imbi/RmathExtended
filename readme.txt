## RmathExtended ##
# Rmath, various other R functions and mvtnorm bundled in a single CMake project

This repository aims to provide an easily accessible C/C++ interface the C Code of R's statistical p/q/r/d functions, as well as some convenience functions (currently only zeroin.c) and functions to solve multivariate normal integral (mvtdstpack Fortran routines).



# Updates to r-source
The whole process of fetching and modifying the r-source files used in this repository is documented in setup_r_sources.sh.
This script is probably pretty fragile. In case files from r-source relevant to this repository are updated, this should provide a reasonable starting point to get the repository up to date. 

$ sh setup_r_source.sh
