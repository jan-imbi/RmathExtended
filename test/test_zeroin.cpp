#include <iostream>
#define MATHLIB_STANDALONE
#define RMATH_DLL
#include <RmathExtended.h>

double somefun(double x, void* info){
    return(x+.1);
}

int main(int argc, char** argv){
    double tol = 0.0005;
    int maxit = 1000;

    std::cout << R_zeroin2(-1, 1, -1, 1, &somefun, NULL, &tol, &maxit) << std::endl;
}