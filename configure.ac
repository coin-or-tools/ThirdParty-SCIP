# Copyright (C) 2011 Stefan Vigerske and others
# All Rights Reserved.
# This file is distributed under the Eclipse Public License.

## $Id: configure.ac 937 2010-10-02 19:05:12Z stefan $

#############################################################################
#                       Names and other basic things                        #
#############################################################################

AC_PREREQ(2.59)

AC_INIT([ThirdPartyScip],[trunk],[http://projects.coin-or.org/BuildTools/newticket])

AC_COPYRIGHT([
Copyright 2011 Stefan Vigerske and others.
All Rights Reserved.
This file is part of the open source package COIN-OR which is distributed
under the Eclipse Public License.])

# List one file in the package so that the configure script can test
# whether the package is actually there
AC_CONFIG_SRCDIR(scip/src/scip/scip.h)

# Where should everything be installed by default?  Here, we want it
# to be installed directly in 'bin', 'lib', 'include' subdirectories
# of the directory where configure is run.  The default would be
# /usr/local.
AC_PREFIX_DEFAULT([`pwd`])

AC_COIN_PROJECTDIR_INIT(SCIP)

#############################################################################
#                         Standard build tool stuff                         #
#############################################################################

# Get the system type
AC_CANONICAL_BUILD

# Check if user wants to produce debugging code
AC_COIN_DEBUG_COMPILE(SCIP)

# Get the name of the C compiler and appropriate compiler options
AC_COIN_PROG_CC

# Get the name of the C++ compiler and appropriate compiler options
AC_COIN_PROG_CXX

# Initialize automake
AM_INIT_AUTOMAKE([subdir-objects])
AM_PROG_CC_C_O
AC_COIN_INIT_AUTO_TOOLS

#############################################################################
#                       Check for external libraries                        #
#############################################################################

# check for some LP solvers
# TODO check for more than Soplex and Clp and have a configure option to set prefered LP solver
AC_COIN_CHECK_PACKAGE(SoPlex, coinsoplex, SCIPLib)
if test "$coin_has_soplex" = no ; then
  AC_COIN_CHECK_PACKAGE(Clp, clp, SCIPLib)
else
  AM_CONDITIONAL(COIN_HAS_CLP, test 0 = 1)
fi
#AC_COIN_CHECK_USER_LIBRARY([Cplex], [CPX],[cplex.h], [CPXgetstat])

# check for NLP solvers
AC_COIN_CHECK_PACKAGE(Ipopt, ipopt, SCIPLib)

# check for CppAD
AC_COIN_CHECK_PACKAGE(CppAD, cppad, SCIPLib)

#############################################################################
#                       Check for system header and libraries               #
#############################################################################

AC_COIN_CHECK_GNU_ZLIB(SCIPlib)
if test $coin_has_zlib = "yes"; then
  EXTRAFLAGS="$EXTRAFLAGS -DWITH_ZLIB"  
fi

AC_CHECK_MEMBER(struct sigaction.sa_handler,,
  [EXTRAFLAGS="$EXTRAFLAGS -DNO_SIGACTION"],
  [#include <signal.h>])
    
AC_CHECK_FUNC(rand_r,,
  [EXTRAFLAGS="$EXTRAFLAGS -DNO_RAND_R"])
    
AC_CHECK_FUNC(strtok_r,,
  [EXTRAFLAGS="$EXTRAFLAGS -DNO_STRTOK_R"])

AC_CHECK_FUNC(strerror_r,,
  [EXTRAFLAGS="$EXTRAFLAGS -DNO_STRERROR_R"])
    
AC_CHECK_HEADER([fenv.h],[EXTRAFLAGS="$EXTRAFLAGS -DROUNDING_FE"],
  [AC_CHECK_HEADER([float.h],[EXTRAFLAGS="$EXTRAFLAGS -DROUNDING_MS"])])

case "$CC" in
  *gcc* )
    EXTRAFLAGS="$EXTRAFLAGS -Wno-overlength-strings"
    ;;
esac
 
CFLAGS="$CFLAGS $EXTRAFLAGS"
CXXFLAGS="$CXXFLAGS $EXTRAFLAGS"
  
AC_CONFIG_FILES([Makefile coinscip.pc coinscip-uninstalled.pc])

# dummy header file to avoid many extra compiler flags
AC_CONFIG_HEADER([config_scip.h])
 
AC_COIN_FINALIZE
