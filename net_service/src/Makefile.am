# ===============================================================
# 
# Release under GPLv-3.0.
# 
# @file    Makefile.am
# @brief   
# @author  gnsyxiang <gnsyxiang@163.com>
# @date    24/03 2022 16:18
# @version v0.0.1
# 
# @since    note
# @note     note
# 
#     change log:
#     NO.     Author              Date            Modified
#     00      zhenquan.qiu        24/03 2022      create the file
# 
#     last modified: 24/03 2022 16:18
# ===============================================================

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
bin_PROGRAMS    =

# ---------------------
# add necessary content
# ---------------------
_no_error_com   +=

_define_com     +=

_include_com    +=

_sources_com    += \
                   eth.c    \
                   ntp.c    \
                   wlan.c   \
                   4G.c

_cppflags_com   += \
                   $(_no_error_com) \
                   $(_include_com)  \
                   $(_define_com)

_cflags_com     +=

_cxxflags_com   +=

_ldflags_com    +=

_ldadd_com      +=

bin_PROGRAMS            += net_service
net_service_SOURCES     = $(_sources_com) main.c
net_service_CPPFLAGS    = $(_cppflags_com)
net_service_CFLAGS      = $(_cflags_com)
net_service_CXXFLAGS    = $(_cxxflags_com)
net_service_LDFLAGS     = $(_ldflags_com)
net_service_LDADD       = $(_ldadd_com)

