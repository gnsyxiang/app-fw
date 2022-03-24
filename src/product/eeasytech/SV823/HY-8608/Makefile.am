# ===============================================================
# 
# Release under GPLv-3.0.
# 
# @file    Makefile.am
# @brief   
# @author  gnsyxiang <gnsyxiang@163.com>
# @date    24/03 2022 17:08
# @version v0.0.1
# 
# @since    note
# @note     note
# 
#     change log:
#     NO.     Author              Date            Modified
#     00      zhenquan.qiu        24/03 2022      create the file
# 
#     last modified: 24/03 2022 17:08
# ===============================================================

SUBDIRS = res

noinst_LTLIBRARIES = libproduct_private.la

# ------------------
# defining variables
# ------------------
_no_error_com   =
_define_com     =
_include_com    =
_sources_com    =
_cppflags_com   =
_cflags_com     =
_cxxflags_com   =
_ldflags_com    =
_ldadd_com      =

# ---------------------
# add necessary content
# ---------------------
_no_error_com   +=

_define_com     +=

_include_com    += \
                   -I$(top_srcdir)/include

_sources_com    += \
                   hy_product.c

_cppflags_com   += \
                   $(_no_error_com)     \
                   $(_include_com)      \
                   $(_define_com)

_cflags_com     +=

_cxxflags_com   +=

_ldflags_com    +=

_ldadd_com      +=

libproduct_private_la_SOURCES   = $(_sources_com)
libproduct_private_la_CPPFLAGS  = $(_cppflags_com)
libproduct_private_la_CFLAGS    = $(_cflags_com)
libproduct_private_la_CXXFLAGS  = $(_cxxflags_com)
libproduct_private_la_LDFLAGS   = $(_ldflags_com)
libproduct_private_la_LIBADD    = $(_ldadd_com)

