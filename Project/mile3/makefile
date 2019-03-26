all: y.tab.c lex.yy.c compile
ONE=src/grammar.y
TWO=src/lex.l
TRY=src/try.cpp
SYM=src/symboltable.cpp
TAC=src/tac.cpp
OUT=compile
y.tab.c: $(ONE)
	yacc -d $(ONE)

lex.yy.c: $(TWO)
	lex $(TWO)

compile: $(TRY) $(SYM) $(TAC) lex.yy.c y.tab.c 
	g++ $(TRY) $(SYM) $(TAC) lex.yy.c y.tab.c -w -o $(OUT) 

clean:
	rm compile lex.yy.c y.tab.c y.tab.h
