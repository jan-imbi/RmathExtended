#include <iostream>
#include <RmathExtended.h>


int main(int argc, char** argv){

int N = 2;
int NU = 0;
double LOWER[2] = {-3, -3};
double UPPER[2] = {3, 3};
int INFIN[2] = {2, 2};
double CORREL[4] = {1, 0, 0, 1};
double DELTA[2] = {0, 0};
int MAXPTS = 16000;
double ABSEPS = .001;
double RELEPS = .001;
double* ERROR = new double[1];
double* VALUE = new double[1];
int* INFORM = new int[1];

    MVTDST( N,
            NU,
            LOWER,
            UPPER,
            INFIN,
            CORREL,
            DELTA,
            MAXPTS,
            ABSEPS,
            RELEPS,
            ERROR,
            VALUE,
            INFORM);

    std::cout << "Test 1: " <<std::endl;
    std::cout << "value: " << *(VALUE) <<std::endl;
    std::cout << "inform: " << *(INFORM) <<std::endl;
    std::cout << "error: " << *(ERROR) <<std::endl;

    double DELTA2[2] = {.4, -.2};

    MVTDST( N,
            NU,
            LOWER,
            UPPER,
            INFIN,
            CORREL,
            DELTA2,
            MAXPTS,
            ABSEPS,
            RELEPS,
            ERROR,
            VALUE,
            INFORM);

    std::cout << "Test 2: " <<std::endl;
    std::cout << "value: " << *(VALUE) <<std::endl;
    std::cout << "inform: " << *(INFORM) <<std::endl;
    std::cout << "error: " << *(ERROR) <<std::endl;



    delete ERROR, VALUE, INFORM;
}