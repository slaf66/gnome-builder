CLEANFILES =
DISTCLEANFILES =
EXTRA_DIST =

noinst_LTLIBRARIES = libjsonrpc-glib.la

libjsonrpc_glib_la_public_sources = \
	jsonrpc-client.c \
	jsonrpc-client.h \
	jsonrpc-input-stream.c \
	jsonrpc-input-stream.h \
	jsonrpc-output-stream.c \
	jsonrpc-output-stream.h \
	jsonrpc-server.c \
	jsonrpc-server.h \
	jsonrpc-version.h \
	$(NULL)

libjsonrpc_glib_la_SOURCES = \
	$(libjsonrpc_glib_la_public_sources) \
	jsonrpc-glib.h \
	jcon.c \
	jcon.h \
	$(NULL)

libjsonrpc_glib_la_CFLAGS = \
	-DJSONRPC_GLIB_COMPILATION \
	$(DEBUG_CFLAGS) \
	$(JSONRPC_CFLAGS) \
	$(OPTIMIZE_CFLAGS) \
	$(NULL)

libjsonrpc_glib_la_LIBADD = $(JSONRPC_LIBS)
libjsonrpc_glib_la_LDFLAGS = $(OPTIMIZE_LDFLAGS)

if HAVE_INTROSPECTION
-include $(INTROSPECTION_MAKEFILE)

INTROSPECTION_GIRS =
INTROSPECTION_SCANNER_ARGS = --add-include-path=$(srcdir) --warn-all
INTROSPECTION_COMPILER_ARGS = --includedir=$(srcdir)

Jsonrpc-1.0.gir: libjsonrpc-glib.la
Jsonrpc_1_0_gir_INCLUDES = Gio-2.0 Json-1.0
Jsonrpc_1_0_gir_CFLAGS = $(libjsonrpc_glib_la_CFLAGS)
Jsonrpc_1_0_gir_LIBS = libjsonrpc-glib.la
Jsonrpc_1_0_gir_FILES = $(libjsonrpc_glib_la_public_sources)
Jsonrpc_1_0_gir_SCANNERFLAGS = \
	--c-include="jsonrpc-glib.h" \
	-n Jsonrpc \
	$(NULL)
INTROSPECTION_GIRS += Jsonrpc-1.0.gir

girdir = $(datadir)/gnome-builder/gir-1.0
dist_gir_DATA = $(INTROSPECTION_GIRS)

typelibdir = $(pkglibdir)/girepository-1.0
typelib_DATA = $(INTROSPECTION_GIRS:.gir=.typelib)

CLEANFILES += $(dist_gir_DATA) $(typelib_DATA)
endif

if ENABLE_VAPIGEN
-include $(VAPIGEN_MAKEFILE)

jsonrpc-glib.vapi: Jsonrpc-1.0.gir

VAPIGEN_VAPIS = jsonrpc-glib.vapi

jsonrpc_glib_vapi_DEPS = gio-2.0 json-glib-1.0
jsonrpc_glib_vapi_METADATADIRS = $(srcdir)
jsonrpc_glib_vapi_FILES = Jsonrpc-1.0.gir

jsonrpc-glib.deps: Makefile
	$(AM_V_GEN) echo $(libjsonrpc_glib_vapi_DEPS) | tr ' ' '\n' > $@

vapidir = $(datadir)/gnome-builder/vapi
vapi_DATA = $(VAPIGEN_VAPIS) $(VAPIGEN_VAPIS:.vapi=.deps)

EXTRA_DIST += jsonrpc-glib.deps

DISTCLEANFILES += $(vapi_DATA)
endif

-include $(top_srcdir)/git.mk
