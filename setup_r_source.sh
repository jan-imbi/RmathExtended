# set up neccesary source
git clone --depth 1 --filter=blob:none --sparse https://github.com/wch/r-source/;
cd r-source
# dl sparse source
git sparse-checkout set src/nmath
git sparse-checkout add src/library/stats/src/optimize.c
git sparse-checkout add src/library/stats/src/zeroin.c
git sparse-checkout add src/include/Rmath.h0.in
git sparse-checkout add src/include/R_ext/

# configure headers 
touch src/include/config.h
cp ../inst/Rconfig.h src/include/

# This makes Rmath.h usable and adds declaration of R_zeroin function
sed 's/@RMATH_HAVE_WORKING_LOG1P@/# define RMATH_HAVE_WORKING_LOG1P/' src/include/Rmath.h0.in | sed 's/\/\* #undef MATHLIB_STANDALONE \*\//#define MATHLIB_STANDALONE/' | sed '/double  logspace_sub(double logx, double logy);/a\\n\/\* RmathExtended functions \*\/' | sed '/\/\* RmathExtended functions \*\//a\\ndouble R_zeroin2(double ax, double bx, double fa, double fb, double (\*f)(double x, void \*info), void \*info, double \*Tol, int \*Maxit);' >> src/include/Rmath.h

# Fix zeroin.c 
sed -i 's/#include <R_ext\/Applic.h>//' src/library/stats/src/zeroin.c

# create RmathExtended.h
cd ..
mkdir include
cat r-source/src/include/Rmath.h >> include/RmathExtended.h
sed -i '/\/\* RmathExtended functions \*\//r ./mvtnorm-source/mvtnorm.h' ./include/RmathExtended.h












# this is "work in progress"
# sed -n '/* One Dimensional Minimization --- just wrapper for/q;p' src/library/stats/src/optimize.c >> src/library/stats/src/optimize_n.c



