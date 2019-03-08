all: y.tab.c lex.yy.c jaadu
ONE=src/grammar.y
TWO=src/lex.l
TRY=src/try.cpp
SYM=src/symboltable.cpp
OUT=jaadu
y.tab.c: $(ONE)
	yacc -d $(ONE)

lex.yy.c: $(TWO)
	lex $(TWO)

jaadu: $(TRY) $(SYM) lex.yy.c y.tab.c 
	g++ $(TRY) $(SYM) lex.yy.c y.tab.c -w -o $(OUT) 

clean:
	rm jaadu lex.yy.c y.tab.c y.tab.h
