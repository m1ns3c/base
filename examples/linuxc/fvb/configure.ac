#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([fvb],[v0.0.1],[root@minsec.cn],[fvb],[https://fvb.minsec.cn])
AC_CONFIG_SRCDIR([src/fvb.c])
AC_CONFIG_HEADERS([src/fvb_config.h])
AM_INIT_AUTOMAKE

AH_TOP([
#ifndef FVB_CONFIG_H
#define FVB_CONFIG_H
])

AH_BOTTOM([
#include <stdlib.h>

#ifdef HAVE_SYS_TYPES_H
#include <sys/select.h>
#endif

#ifdef HAVE_SYS_SELECT_H
#include <sys/select.h>
#endif

#include <string.h>

#endif /* FVB_CONFIG_H */
])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile src/Makefile scripts/Makefile])
AC_OUTPUT
