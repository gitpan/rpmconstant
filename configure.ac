#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
# $Id: configure.ac 33 2005-10-04 04:04:45Z nanardon $

AC_PREREQ(2.59)
AC_INIT(rpmconstant, 0.1.0, nanardon@zarb.org)
AC_CONFIG_SRCDIR([rpmconstant.c])
AM_INIT_AUTOMAKE(1.8)

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lpopt':
AC_CHECK_LIB([popt], [poptGetContext])

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([string.h rpm/rpmlib.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST

# Checks for library functions.

AC_OUTPUT(Makefile)

