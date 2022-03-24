# ===============================================================
# 
# Release under GPLv-3.0.
# 
# @file    Makefile.am
# @brief   
# @author  gnsyxiang <gnsyxiang@163.com>
# @date    24/03 2022 16:49
# @version v0.0.1
# 
# @since    note
# @note     note
# 
#     change log:
#     NO.     Author              Date            Modified
#     00      zhenquan.qiu        24/03 2022      create the file
# 
#     last modified: 24/03 2022 16:49
# ===============================================================

SUBDIRS = \
          product

lib_LTLIBRARIES = libproduct.la

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

_include_com    += -I$(top_srcdir)/include

_sources_com    +=

_cppflags_com   += $(_no_error_com) $(_include_com) $(_define_com)

_cflags_com     +=

_cxxflags_com   +=

_ldflags_com    += \
                   -export-symbols-regex 'Hy*'                  \
                   -version-info @current@:@revision@:@age@

_ldadd_com      += $(top_builddir)/src/product/$(vender)/$(chip)/$(product)/libproduct_private.la

libproduct_la_SOURCES    = $(_sources_com)
libproduct_la_CPPFLAGS   = $(_cppflags_com)
libproduct_la_CFLAGS     = $(_cflags_com)
libproduct_la_CXXFLAGS   = $(_cxxflags_com)
libproduct_la_LDFLAGS    = $(_ldflags_com)
libproduct_la_LIBADD     = $(_ldadd_com)

