#
# Copyright 2018 The Statslabs Authors.
#
cmake_minimum_required(VERSION 3.0)
project(RmathExtended VERSION 1.0.0 LANGUAGES C Fortran)

set(CMAKE_C_STANDARD 99)

##################################################
# Create target and set properties
##################################################

add_library(RmathExtended
SHARED
r-source/src/nmath/bd0.c
r-source/src/nmath/bessel_i.c
r-source/src/nmath/bessel_j.c
r-source/src/nmath/bessel_k.c
r-source/src/nmath/bessel_y.c
r-source/src/nmath/beta.c
r-source/src/nmath/chebyshev.c
r-source/src/nmath/choose.c
r-source/src/nmath/cospi.c
r-source/src/nmath/d1mach.c
r-source/src/nmath/dbeta.c
r-source/src/nmath/dbinom.c
r-source/src/nmath/dcauchy.c
r-source/src/nmath/dchisq.c
r-source/src/nmath/dexp.c
r-source/src/nmath/df.c
r-source/src/nmath/dgamma.c
r-source/src/nmath/dgeom.c
r-source/src/nmath/dhyper.c
r-source/src/nmath/dlnorm.c
r-source/src/nmath/dlogis.c
r-source/src/nmath/dnbeta.c
r-source/src/nmath/dnbinom.c
r-source/src/nmath/dnchisq.c
r-source/src/nmath/dnf.c
r-source/src/nmath/dnorm.c
r-source/src/nmath/dnt.c
r-source/src/nmath/dpois.c
r-source/src/nmath/dt.c
r-source/src/nmath/dunif.c
r-source/src/nmath/dweibull.c
r-source/src/nmath/fmax2.c
r-source/src/nmath/fmin2.c
r-source/src/nmath/fprec.c
r-source/src/nmath/fround.c
r-source/src/nmath/fsign.c
r-source/src/nmath/ftrunc.c
r-source/src/nmath/gamma.c
r-source/src/nmath/gammalims.c
r-source/src/nmath/gamma_cody.c
r-source/src/nmath/i1mach.c
r-source/src/nmath/imax2.c
r-source/src/nmath/imin2.c
r-source/src/nmath/lbeta.c
r-source/src/nmath/lgamma.c
r-source/src/nmath/lgammacor.c
r-source/src/nmath/log1p.c
r-source/src/nmath/mlutils.c
r-source/src/nmath/pbeta.c
r-source/src/nmath/pbinom.c
r-source/src/nmath/pcauchy.c
r-source/src/nmath/pchisq.c
r-source/src/nmath/pexp.c
r-source/src/nmath/pf.c
r-source/src/nmath/pgamma.c
r-source/src/nmath/pgeom.c
r-source/src/nmath/phyper.c
r-source/src/nmath/plnorm.c
r-source/src/nmath/plogis.c
r-source/src/nmath/pnbeta.c
r-source/src/nmath/pnbinom.c
r-source/src/nmath/pnchisq.c
r-source/src/nmath/pnf.c
r-source/src/nmath/pnorm.c
r-source/src/nmath/pnt.c
r-source/src/nmath/polygamma.c
r-source/src/nmath/ppois.c
r-source/src/nmath/pt.c
r-source/src/nmath/ptukey.c
r-source/src/nmath/punif.c
r-source/src/nmath/pweibull.c
r-source/src/nmath/qbeta.c
r-source/src/nmath/qbinom.c
r-source/src/nmath/qcauchy.c
r-source/src/nmath/qchisq.c
r-source/src/nmath/qexp.c
r-source/src/nmath/qf.c
r-source/src/nmath/qgamma.c
r-source/src/nmath/qgeom.c
r-source/src/nmath/qhyper.c
r-source/src/nmath/qlnorm.c
r-source/src/nmath/qlogis.c
r-source/src/nmath/qnbeta.c
r-source/src/nmath/qnbinom.c
r-source/src/nmath/qnbinom_mu.c
r-source/src/nmath/qnchisq.c
r-source/src/nmath/qnf.c
r-source/src/nmath/qnorm.c
r-source/src/nmath/qnt.c
r-source/src/nmath/qpois.c
r-source/src/nmath/qt.c
r-source/src/nmath/qtukey.c
r-source/src/nmath/qunif.c
r-source/src/nmath/qweibull.c
r-source/src/nmath/rbeta.c
r-source/src/nmath/rbinom.c
r-source/src/nmath/rcauchy.c
r-source/src/nmath/rchisq.c
r-source/src/nmath/rexp.c
r-source/src/nmath/rf.c
r-source/src/nmath/rgamma.c
r-source/src/nmath/rgeom.c
r-source/src/nmath/rhyper.c
r-source/src/nmath/rlnorm.c
r-source/src/nmath/rlogis.c
r-source/src/nmath/rmultinom.c
r-source/src/nmath/rnbinom.c
r-source/src/nmath/rnchisq.c
r-source/src/nmath/rnorm.c
r-source/src/nmath/rpois.c
r-source/src/nmath/rt.c
r-source/src/nmath/runif.c
r-source/src/nmath/rweibull.c
r-source/src/nmath/sexp.c
r-source/src/nmath/sign.c
r-source/src/nmath/signrank.c
r-source/src/nmath/snorm.c
r-source/src/nmath/standalone/sunif.c
# r-source/src/nmath/standalone/test.c
r-source/src/nmath/stirlerr.c
r-source/src/nmath/toms708.c
r-source/src/nmath/wilcox.c
r-source/src/library/stats/src/zeroin.c
mvtnorm-source/mvtdstpack.f
)

# Set target properties
target_include_directories(RmathExtended
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/r-source/src/include
	)


# test pnorm
project(test_pnorm VERSION 1.0.0 LANGUAGES CXX)
add_executable(test_pnorm
	test/test_pnorm.cpp
)
target_include_directories(test_pnorm
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	)
# find_library(RmathExtended ${CMAKE_CURRENT_SOURCE_DIR}/build/)
target_link_libraries(test_pnorm
RmathExtended
)


# test zeroin
project(test_zeroin VERSION 1.0.0 LANGUAGES CXX)
add_executable(test_zeroin
	test/test_zeroin.cpp
)
target_include_directories(test_zeroin
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	)
# find_library(RmathExtended ${CMAKE_CURRENT_SOURCE_DIR}/build/)
target_link_libraries(test_zeroin
RmathExtended
)

# test mvtdst
project(test_mvtdst VERSION 1.0.0 LANGUAGES CXX)
add_executable(test_mvtdst
	test/test_mvtdst.cpp
)
target_include_directories(test_mvtdst
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	)
# find_library(RmathExtended ${CMAKE_CURRENT_SOURCE_DIR}/build/)
target_link_libraries(test_mvtdst
RmathExtended
)




