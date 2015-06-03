#############################################################################
# Makefile for building: Graph
# Generated by qmake (3.0) (Qt 5.2.0)
# Project:  Graph.pro
# Template: app
# Command: /opt/qt/5.2.0/gcc_64/bin/qmake -spec linux-g++ CONFIG+=debug CONFIG+=declarative_debug CONFIG+=qml_debug -o Makefile Graph.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_QML_DEBUG -DQT_DECLARATIVE_DEBUG
CFLAGS        = -pipe -g -Wall -W -fPIE $(DEFINES)
CXXFLAGS      = -pipe -g -std=c++0x -Wall -W -fPIE $(DEFINES)
INCPATH       = -I/opt/qt/5.2.0/gcc_64/mkspecs/linux-g++ -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/opt/qt/5.2.0/gcc_64
LIBS          = $(SUBLIBS)  
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/qt/5.2.0/gcc_64/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		Graph/Graph.cpp \
		Graph/edge/Edge.cpp \
		Graph/node/Node.cpp \
		Graph/edge/EdgeBuilder.cpp 
OBJECTS       = main.o \
		Graph.o \
		Edge.o \
		Node.o \
		EdgeBuilder.o
DIST          = /opt/qt/5.2.0/gcc_64/mkspecs/features/spec_pre.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/shell-unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/linux.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/gcc-base.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/gcc-base-unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/g++-base.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/g++-unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/qconfig.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_core.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_help.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_network.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_script.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/qt_functions.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/qt_config.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/linux-g++/qmake.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/spec_post.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/exclusive_builds.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/default_pre.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/resolve_config.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/default_post.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/c++11.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/qml_debug.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/declarative_debug.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/warn_on.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/testcase_targets.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/exceptions.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/yacc.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/lex.prf \
		Graph.pro \
		Graph.pro
QMAKE_TARGET  = Graph
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = Graph


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: Graph.pro /opt/qt/5.2.0/gcc_64/mkspecs/linux-g++/qmake.conf /opt/qt/5.2.0/gcc_64/mkspecs/features/spec_pre.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/shell-unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/linux.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/gcc-base.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/gcc-base-unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/g++-base.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/common/g++-unix.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/qconfig.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_core.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_help.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_network.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_script.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/qt_functions.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/qt_config.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/linux-g++/qmake.conf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/spec_post.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/exclusive_builds.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/default_pre.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/resolve_config.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/default_post.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/c++11.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/qml_debug.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/declarative_debug.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/warn_on.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/testcase_targets.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/exceptions.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/yacc.prf \
		/opt/qt/5.2.0/gcc_64/mkspecs/features/lex.prf \
		Graph.pro
	$(QMAKE) -spec linux-g++ CONFIG+=debug CONFIG+=declarative_debug CONFIG+=qml_debug -o Makefile Graph.pro
/opt/qt/5.2.0/gcc_64/mkspecs/features/spec_pre.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/common/shell-unix.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/common/unix.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/common/linux.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/common/gcc-base.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/common/gcc-base-unix.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/common/g++-base.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/common/g++-unix.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/qconfig.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_concurrent.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_core.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_core_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_dbus.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_declarative.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designer.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designer_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_gui.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_gui_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_help.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_help_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimedia.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_network.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_network_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_nfc.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_opengl.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_positioning.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_printsupport.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qml.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qml_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmltest.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quick.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quick_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_script.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_script_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_scripttools.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sensors.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_serialport.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sql.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_sql_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_svg.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_svg_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_testlib.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_uitools.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkit.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_widgets.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_x11extras.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xml.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xml_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/opt/qt/5.2.0/gcc_64/mkspecs/features/qt_functions.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/qt_config.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/linux-g++/qmake.conf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/spec_post.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/exclusive_builds.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/default_pre.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/resolve_config.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/default_post.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/c++11.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/qml_debug.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/declarative_debug.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/unix/gdb_dwarf_index.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/warn_on.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/testcase_targets.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/exceptions.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/yacc.prf:
/opt/qt/5.2.0/gcc_64/mkspecs/features/lex.prf:
Graph.pro:
qmake: FORCE
	@$(QMAKE) -spec linux-g++ CONFIG+=debug CONFIG+=declarative_debug CONFIG+=qml_debug -o Makefile Graph.pro

qmake_all: FORCE

dist: 
	@test -d .tmp/Graph1.0.0 || mkdir -p .tmp/Graph1.0.0
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Graph1.0.0/ && (cd `dirname .tmp/Graph1.0.0` && $(TAR) Graph1.0.0.tar Graph1.0.0 && $(COMPRESS) Graph1.0.0.tar) && $(MOVE) `dirname .tmp/Graph1.0.0`/Graph1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Graph1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

main.o: main.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

Graph.o: Graph/Graph.cpp Graph/Graph.h \
		Graph/node/Node.h \
		Graph/edge/Edge.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Graph.o Graph/Graph.cpp

Edge.o: Graph/edge/Edge.cpp Graph/edge/Edge.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Edge.o Graph/edge/Edge.cpp

Node.o: Graph/node/Node.cpp Graph/node/Node.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Node.o Graph/node/Node.cpp

EdgeBuilder.o: Graph/edge/EdgeBuilder.cpp Graph/edge/Edge.h \
		Graph/edge/EdgeBuilder.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o EdgeBuilder.o Graph/edge/EdgeBuilder.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

