ICOMSRCLIST = ic706.c icr8500.c ic735.c ic775.c ic756.c  \
		ic275.c ic475.c ic1275.c ic820h.c ic821h.c \
		icr7000.c ic910.c ic9100.c ic970.c ic725.c ic737.c ic718.c \
		os535.c os456.c omni.c delta2.c ic92d.c \
		ic736.c ic738.c ic7410.c ic746.c ic703.c ic726.c ic271.c \
		ic765.c ic781.c ic471.c id1.c icr9000.c icr9500.c \
		icr10.c icr20.c icr71.c icr72.c icr75.c icrx7.c \
		ic707.c ic728.c ic751.c ic761.c \
		ic78.c ic7800.c ic7000.c ic7200.c ic7600.c ic7700.c

pkglib_LTLIBRARIES = hamlib-icom.la
hamlib_icom_la_SOURCES = $(ICOMSRCLIST) icom.c frame.c optoscan.c
hamlib_icom_la_LDFLAGS = -no-undefined -module -avoid-version
hamlib_icom_la_LIBADD = $(top_builddir)/lib/libmisc.la \
			$(top_builddir)/src/libhamlib.la

EXTRA_DIST = README.icom TODO.icom

noinst_HEADERS = frame.h icom.h icom_defs.h optoscan.h
