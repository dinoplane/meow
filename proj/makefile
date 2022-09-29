DEPSFILE  = Makefile.deps
NOINCLUDE = clean
NEEDINCL  = ${filter ${NOINCLUDE}, ${MAKECMDGOALS}}
WARNINGS  = -Wall -Wextra -Wpedantic -Wshadow -Wold-style-cast
GPPOPTS   = -std=c++2a -g -O0 -fdiagnostics-color=never
GPP       = g++ ${GPPOPTS} ${WARNINGS}

MODULES   = location util astree auxlib attr symbol codegen
HDRSRC    = ${MODULES:=.h}
CPPSRC    = ${MODULES:=.cpp} main.cpp
FLEXSRC   = scanner.l
BISONSRC  = parser.y
PARSEHDR  = yyparse.h
LEXCPP    = yylex.cpp
PARSECPP  = yyparse.cpp
CGENS     = ${PARSECPP} ${LEXCPP} 
ALLGENS   = ${PARSEHDR} ${CGENS}
EXECBIN   = nyan
ALLCSRC   = ${CGENS} ${CPPSRC}
OBJECTS   = ${ALLCSRC:.cpp=.o}

all : ${EXECBIN}

${EXECBIN} : ${OBJECTS}
	${GPP} -o${EXECBIN} ${OBJECTS}

%.o : %.cpp
	- [[ $< == yy*.cpp ]] 
	${GPP} -c $<


${LEXCPP} : ${FLEXSRC}
	flex --outfile=${LEXCPP} ${FLEXSRC}

${PARSECPP} ${PARSEHDR} : ${BISONSRC}
	bison -v --defines=${PARSEHDR} --output=${PARSECPP} ${BISONSRC}




clean :
	rm ${OBJECTS} ${ALLGENS} ${EXECBIN} testcases/*.tokens testcases/*.ast testcases/*.sym testcases/*.3ac
	

