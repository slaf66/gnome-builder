AC_ARG_ENABLE([meson-templates],
              [AS_HELP_STRING([--enable-meson-templates=@<:@yes/no@:>@],
                              [Build with support for creating meson projects.])],
              [enable_meson_templates=$enableval],
              [enable_meson_templates=no])

# for if ENABLE_MESON_TEMPLATE_PLUGIN in Makefile.am
AM_CONDITIONAL(ENABLE_MESON_TEMPLATES, [test "x$enable_meson_templates" = "xyes"])

# Ensure our makefile is generated by autoconf
AC_CONFIG_FILES([plugins/meson-templates/Makefile])

