# --enable-support-plugin=yes/no
AC_ARG_ENABLE([support-plugin],
              [AS_HELP_STRING([--enable-support-plugin=@<:@yes/no@:>@],
                              [Build with support for generating bug/support logs.])],
              [enable_support_plugin=$enableval],
              [enable_support_plugin=yes])

# for if ENABLE_SUPPORT_PLUGIN in Makefile.am
AM_CONDITIONAL(ENABLE_SUPPORT_PLUGIN, test x$enable_support_plugin != xno)

# Ensure our makefile is generated by autoconf
AC_CONFIG_FILES([plugins/support/Makefile])
