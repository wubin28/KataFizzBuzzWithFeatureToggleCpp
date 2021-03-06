#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/fizzbuzz_with_feature_toggle.o \
	${OBJECTDIR}/fizzbuzz_with_feature_toggle_test.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-std=c++11
CXXFLAGS=-std=c++11

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=../googletest/dist/Debug/GNU-Linux-x86/libgoogletest.a

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fizzbuzzwithfeaturetoggle

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fizzbuzzwithfeaturetoggle: ../googletest/dist/Debug/GNU-Linux-x86/libgoogletest.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fizzbuzzwithfeaturetoggle: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fizzbuzzwithfeaturetoggle ${OBJECTFILES} ${LDLIBSOPTIONS} -lpthread

${OBJECTDIR}/fizzbuzz_with_feature_toggle.o: fizzbuzz_with_feature_toggle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/fizzbuzz_with_feature_toggle.o fizzbuzz_with_feature_toggle.cpp

${OBJECTDIR}/fizzbuzz_with_feature_toggle_test.o: fizzbuzz_with_feature_toggle_test.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/fizzbuzz_with_feature_toggle_test.o fizzbuzz_with_feature_toggle_test.cpp

# Subprojects
.build-subprojects:
	cd ../googletest && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fizzbuzzwithfeaturetoggle

# Subprojects
.clean-subprojects:
	cd ../googletest && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
