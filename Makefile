# Arrian Chi acchi
# $Id: Makefile,v 1.5 2022-01-08 11:12:42-08 - - $

DEPSFILE  = Makefile.deps
NOINCLUDE = clean spotless
NEEDINCL  = ${filter ${NOINCLUDE}, ${MAKECMDGOALS}}
WARNINGS  = -Wall -Wextra -Wpedantic -Wshadow -Wold-style-cast
GPPOPTS   = -std=gnu++2a -g -O0 -fdiagnostics-color=never
GPP       = g++ ${GPPOPTS} ${WARNINGS}
MKDEPS    = g++ -std=gnu++2a -MM

MODULES   = astree auxlib cpp_pipe debug lyutils
HDRSRC    = ${MODULES:=.h}
CPPSRC    = ${MODULES:=.cpp} main.cpp
FLEXSRC   = scanner.l
BISONSRC  = parser.y
PARSEHDR  = yyparse.h
LEXCPP    = yylex.cpp
PARSECPP  = yyparse.cpp
CGENS     = ${LEXCPP} ${PARSECPP}
ALLGENS   = ${PARSEHDR} ${CGENS}
EXECBIN   = oc
ALLCSRC   = ${CPPSRC} ${CGENS}
OBJECTS   = ${ALLCSRC:.cpp=.o}
YYREPORT  = yyparse.output
MODSRC    = ${foreach MOD, ${MODULES}, ${MOD}.h ${MOD}.cpp}
MISCSRC   = ${filter-out ${MODSRC}, ${HDRSRC} ${CPPSRC}}
ALLSRC    = ${FLEXSRC} ${BISONSRC} ${MODSRC} ${MISCSRC} Makefile 
LISTSRC   = ${ALLSRC} ${DEPSFILE} ${PARSEHDR}

export PATH := ${PATH}:/afs/cats.ucsc.edu/courses/cse110a-wm/bin

all : ${EXECBIN}

${EXECBIN} : ${OBJECTS}
	${GPP} -o${EXECBIN} ${OBJECTS}

%.o : %.cpp
	${GPP} -c $<


${LEXCPP} : ${FLEXSRC}
	flex --outfile=${LEXCPP} ${FLEXSRC}

${PARSECPP} ${PARSEHDR} : ${BISONSRC}
	bison -v --defines=${PARSEHDR} --output=${PARSECPP} ${BISONSRC}


lis : ${LISTSRC}
	- pkill -s 0 gv || true
	mkpspdf List.source.ps ${LISTSRC}
	mkpspdf List.report.ps ${YYREPORT}

clean :
	- rm ${OBJECTS} ${ALLGENS} ${YYREPORT} ${DEPSFILE} 
	- rm List.*.{ps,pdf}
	- rm *.err *.out *.tokens *.ast *.symbols *.ocil

spotless : clean
	- rm ${EXECBIN}

deps : ${ALLCSRC}
	@ echo "# ${DEPSFILE} created $$(LC_TIME=C date)" >${DEPSFILE}
	${MKDEPS} ${ALLCSRC} >>${DEPSFILE}

${DEPSFILE} :
	@ touch ${DEPSFILE}
	${MAKE} --no-print-directory deps

again :
	gmake --no-print-directory spotless deps ci all lis
	
confirm :
	echo ${ALLSRC} README;

submit :
	submit cse110a-wm.w22 asg4 ${ALLSRC} README

ifeq "${NEEDINCL}" ""
include ${DEPSFILE}
endif

