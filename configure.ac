#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])

m4_include([m4/check_project_info.m4])

AC_INIT([PROJECT_NAME], [VERSION_NUM], [EMAIL_INFO], [PROJECT_NAME], [PROJECT_URL])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([foreign -Wall -Werror])
AM_SILENT_RULES([yes])
AM_PROG_AR

LT_INIT

PKG_PROG_PKG_CONFIG([0.24])

# check m4 macro
CHECK_PROJECT_INFO
CHECK_VERSION_INFO
CHECK_DOXYGEN
# CHECK_JAVA

CHECK_LIBCJSON
CHECK_LIBHY_HAL
CHECK_LIBHY_UTILS

SELECT_VENDER
SELECT_CHIP
SELECT_PRODUCT
SELECT_LANGUAGE

PKG_PROG_PKG_CONFIG
if test -n "$PKG_CONFIG"; then
    # Horrible hack for systems where the pkg-config install directory is simply wrong!
    if $PKG_CONFIG --variable=pc_path pkg-config 2>/dev/null | grep -q /lib/; then
        PKG_INSTALLDIR(['${prefix}/lib/pkgconfig'])
        else
            PKG_INSTALLDIR
    fi
fi

AC_ARG_ENABLE([debug_info],
              [AS_HELP_STRING([--enable-debug_info], [enable support for output debug info])],
              [], [enable_debug_info=no])
AM_CONDITIONAL(COMPILE_DEBUG_INFO, [test "$enable_debug_info" = "yes"])

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
# AC_PROG_RANLIB

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([inttypes.h limits.h stddef.h stdint.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT32_T
AC_TYPE_INT8_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset strerror])

AC_CONFIG_FILES([MSG_server/Makefile
                 MSG_server/include/Makefile
                 MSG_server/res/Makefile
                 MSG_server/src/Makefile
                 Makefile
                 build-script/Makefile
                 build-script/eeasytech/Makefile
                 build-script/eeasytech/SV823/Makefile
                 build-script/pc/Makefile
                 build-script/pc/pc-chip/Makefile
                 demo_app/Makefile
                 demo_app/include/Makefile
                 demo_app/res/Makefile
                 demo_app/src/Makefile
                 doc/Makefile
                 dog/Makefile
                 dog/include/Makefile
                 dog/res/Makefile
                 dog/src/Makefile
                 include/Makefile
                 misc_service/Makefile
                 misc_service/include/Makefile
                 misc_service/res/Makefile
                 misc_service/src/Makefile
                 net_service/Makefile
                 net_service/include/Makefile
                 net_service/res/Makefile
                 net_service/src/Makefile
                 platform/Makefile
                 platform/eeasytech/Makefile
                 platform/eeasytech/SV823/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/Makefile
                 platform/eeasytech/SV823/filesystem/Makefile
                 platform/pc/Makefile
                 platform/pc/pc-chip/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/Makefile
                 platform/pc/pc-chip/filesystem/Makefile
                 res/Makefile
                 res/font/Makefile
                 res/voice/Makefile
                 res/voice/cn/Makefile
                 res/voice/en/Makefile
                 src/Makefile
                 src/product/Makefile
                 src/product/eeasytech/Makefile
                 src/product/eeasytech/SV823/HY-8608/Makefile
                 src/product/eeasytech/SV823/HY-8608/res/Makefile
                 src/product/eeasytech/SV823/HY-8608E/Makefile
                 src/product/eeasytech/SV823/HY-8608EV2/Makefile
                 src/product/eeasytech/SV823/Makefile
                 src/product/pc/Makefile
                 src/product/pc/pc-chip/HY-pc/Makefile
                 src/product/pc/pc-chip/HY-pc/res/Makefile
                 src/product/pc/pc-chip/Makefile
                 upgrade_service/Makefile
                 upgrade_service/include/Makefile
                 upgrade_service/res/Makefile
                 upgrade_service/src/Makefile])
AC_OUTPUT

AC_MSG_RESULT([
               $PACKAGE $VERSION

               CC:                  ${CC}
               CPPFLAGS:            ${CPPFLAGS}
               CFLAGS:              ${CFLAGS}
               CXX:                 ${CXX}
               CXXFLAGS:            ${CXXFLAGS}
               LDFLAGS:             ${LDFLAGS}
               LIBS:                ${LIBS}

               prefix:              ${prefix}
               sysconfdir:          ${sysconfdir}
               libdir:              ${libdir}
               includedir:          ${includedir}
               pkgconfigdir:        ${pkgconfigdir}
               ])
