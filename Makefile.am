# $Id: Makefile.am 33 2005-10-04 04:04:45Z nanardon $

bin_PROGRAMS = rpmconstant
lib_LTLIBRARIES     = librpmconstant.la
librpmconstant_la_LDFLAGS = -version-info 0:0:0
librpmconstant_la_SOURCES = rpmconstant.c \
                      	    rpmconstant.h \
						    rpmconstanttbl.c \
							rpmconstant_internal.c \
							rpmh2tbl

rpmconstant_SOURCES = constant.c
rpmconstant_LDADD   = librpmconstant.la
pkgincdir = $(pkgincludedir)
pkginc_HEADERS = rpmconstant.h

RPM_INCLUDE_DIR = /usr/include/rpm
BUILT_SOURCES = rpmconstanttbl.c
CLEANFILES = rpmconstanttbl.c

rpmconstanttbl.c: Makefile.am rpmh2tbl
	$(top_srcdir)/rpmh2tbl $(RPM_INCLUDE_DIR)/*.h > $@

rpmh2tbl:

.PHONY: ChangeLog

ChangeLog:
	svn update && svn log --verbose > ChangeLog
