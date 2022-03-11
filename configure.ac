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

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([MSG_server/Makefile
                 MSG_server/include/Makefile
                 MSG_server/res/Makefile
                 MSG_server/src/Makefile
                 Makefile
                 demo_app/Makefile
                 demo_app/include/Makefile
                 demo_app/res/Makefile
                 demo_app/src/Makefile
                 doc/Makefile
                 dog/Makefile
                 dog/include/Makefile
                 dog/res/Makefile
                 dog/src/Makefile
                 misc_service/Makefile
                 misc_service/include/Makefile
                 misc_service/res/Makefile
                 misc_service/src/Makefile
                 platform/Makefile
                 platform/eeasytech/Makefile
                 platform/eeasytech/SV823/3rd_lib/Makefile
                 platform/eeasytech/SV823/3rd_lib/bin/Makefile
                 platform/eeasytech/SV823/3rd_lib/include/Makefile
                 platform/eeasytech/SV823/3rd_lib/lib/Makefile
                 platform/eeasytech/SV823/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/ROM/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/bin/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/etc/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/ko/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/lib/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/res/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/res/font/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/res/voice/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/res/voice/cn/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/res/voice/en/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608/usr_config/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/ROM/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/bin/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/etc/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/ko/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/lib/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/res/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/res/font/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/res/voice/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/res/voice/cn/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/res/voice/en/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608E/usr_config/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/ROM/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/bin/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/etc/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/ko/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/lib/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/res/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/res/font/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/res/voice/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/res/voice/cn/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/res/voice/en/Makefile
                 platform/eeasytech/SV823/filesystem/HY-8608EV2/usr_config/Makefile
                 platform/eeasytech/SV823/filesystem/Makefile
                 platform/eeasytech/SV826/3rd_lib/Makefile
                 platform/eeasytech/SV826/3rd_lib/bin/Makefile
                 platform/eeasytech/SV826/3rd_lib/include/Makefile
                 platform/eeasytech/SV826/3rd_lib/lib/Makefile
                 platform/eeasytech/SV826/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/ROM/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/bin/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/etc/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/ko/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/lib/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/res/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/res/font/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/res/voice/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/res/voice/cn/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/res/voice/en/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808/usr_config/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/ROM/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/bin/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/etc/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/ko/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/lib/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/res/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/res/font/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/res/voice/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/res/voice/cn/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/res/voice/en/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808E/usr_config/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/ROM/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/bin/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/etc/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/ko/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/lib/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/res/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/res/font/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/res/voice/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/res/voice/cn/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/res/voice/en/Makefile
                 platform/eeasytech/SV826/filesystem/HY-8808EV2/usr_config/Makefile
                 platform/eeasytech/SV826/filesystem/Makefile
                 platform/pc/Makefile
                 platform/pc/pc-chip/3rd_lib/Makefile
                 platform/pc/pc-chip/3rd_lib/bin/Makefile
                 platform/pc/pc-chip/3rd_lib/include/Makefile
                 platform/pc/pc-chip/3rd_lib/lib/Makefile
                 platform/pc/pc-chip/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/ROM/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/bin/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/etc/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/ko/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/lib/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/res/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/res/font/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/res/voice/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/res/voice/cn/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/res/voice/en/Makefile
                 platform/pc/pc-chip/filesystem/HY-pc/usr_config/Makefile
                 platform/pc/pc-chip/filesystem/Makefile
                 res/Makefile
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
