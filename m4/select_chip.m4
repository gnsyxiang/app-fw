dnl ===============================================================
dnl 
dnl Release under GPLv-3.0.
dnl 
dnl @file    select_chip.m4
dnl @brief   
dnl @author  gnsyxiang <gnsyxiang@163.com>
dnl @date    10/03 2022 20:11
dnl @version v0.0.1
dnl 
dnl @since    note
dnl @note     note
dnl 
dnl     change log:
dnl     NO.     Author              Date            Modified
dnl     00      zhenquan.qiu        10/03 2022      create the file
dnl 
dnl     last modified: 10/03 2022 20:11
dnl ===============================================================

# SELECT_CHIP()
# --------------------------------------------------------------
# select chip

AC_DEFUN([SELECT_CHIP],
    [
        chip=""

        AC_ARG_WITH([chip],
            [AS_HELP_STRING([--with-chip=@<:@pc-chip|SV823|SV826@:>@], [select chip about @<:@pc-chip|SV823|SV826@:>@ @<:@default=pc-chip@:>@])],
            [],
            [with_chip=pc-chip])

        case "$with_chip" in
            pc-chip)
                AC_DEFINE(HAVE_SELECT_CHIP_PC,  1, [select pc chip])
                chip="pc-chip"
            ;;
            SV823)
                AC_DEFINE(HAVE_SELECT_CHIP_SV823,  1, [select SV823 chip])
                chip="SV823"
            ;;
            SV826)
                AC_DEFINE(HAVE_SELECT_CHIP_SV826,  1, [select SV826 chip])
                chip="SV826"
            ;;
            *)
                AC_MSG_ERROR([bad value ${with_chip} for --with-vender=@<:@pc-chip|SV823|SV826@:>@])
            ;;
        esac

        AM_CONDITIONAL([COMPILE_SELECT_CHIP_PC],        [test "x$with_chip" = "xpc-chip"])
        AM_CONDITIONAL([COMPILE_SELECT_CHIP_SV823],     [test "x$with_chip" = "xSV823"])
        AM_CONDITIONAL([COMPILE_SELECT_CHIP_SV826],     [test "x$with_chip" = "xSV826"])
    ])

