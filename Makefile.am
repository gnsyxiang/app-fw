# ===============================================================
# 
# Release under GPLv-3.0.
# 
# @file    Makefile.am
# @brief   
# @author  gnsyxiang <gnsyxiang@163.com>
# @date    10/03 2022 16:39
# @version v0.0.1
# 
# @since    note
# @note     note
# 
#     change log:
#     NO.     Author              Date            Modified
#     00      zhenquan.qiu        10/03 2022      create the file
# 
#     last modified: 10/03 2022 16:39
# ===============================================================

include res/doxygen.am

SUBDIRS = \
          include           \
          src               \
          dog               \
          demo_app          \
          misc_service      \
          MSG_server        \
          upgrade_service   \
          net_service       \
          res               \
          platform

# ------------------
# defining variables
# ------------------
_install_files_com  =
_dist_files_com     =
dist_doc_DATA       =
EXTRA_DIST          =

ACLOCAL_AMFLAGS     = -I m4

# ---------------------
# add necessary content
# ---------------------


# ------------------
# make install files
# ------------------
_install_files_com  += \
                       LICENSE      \
                       README.md
dist_doc_DATA       += $(_install_files_com)

# ---------------
# make dist files
# ---------------
_dist_files_com     += \
                       autogen.sh   \
                       build.sh
EXTRA_DIST          += $(_dist_files_com)

