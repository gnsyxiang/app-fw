# ===============================================================
# 
# Release under GPLv-3.0.
# 
# @file    Makefile.am
# @brief   
# @author  gnsyxiang <gnsyxiang@163.com>
# @date    24/03 2022 19:11
# @version v0.0.1
# 
# @since    note
# @note     note
# 
#     change log:
#     NO.     Author              Date            Modified
#     00      zhenquan.qiu        24/03 2022      create the file
# 
#     last modified: 24/03 2022 19:11
# ===============================================================

# ------------------
# defining variables
# ------------------
_rom_install_files  =
_usr_install_files  =
_dist_file_com      =
romdir              = $(prefix)/../param/ROM
usrdir              = $(prefix)/../param/usr_config
rom_DATA            =
usr_DATA            =

# ---------------------
# add necessary content
# ---------------------

# ---------------
# make dist files
# ---------------
_dist_file_com      += \
                       net.json     \
                       product.json

EXTRA_DIST          = $(_dist_file_com)

# ------------------
# make install files
# ------------------
_rom_install_files  += product.json
rom_DATA            += $(_rom_install_files)

_usr_install_files  += net.json
usr_DATA            += $(_usr_install_files)

