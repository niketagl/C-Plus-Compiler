all: y.tab.c1 lex.yy.c1 compile y.tab.c2 lex.yy.c2 jaadu
ONE=src/codegen.y
TWO=src/codegenlex.l
TRY=src/codegentry.cpp
TAC=src/codegentac.cpp
OUT=jaadu

ONE1=src/grammar.y
TWO1=src/lex.l
TRY1=src/try.cpp
TAC1=src/tac.cpp
SYM1=src/symboltable.cpp
OUT1=compile

y.tab.c2: $(ONE)
	yacc -d $(ONE)

lex.yy.c2: $(TWO)
	lex $(TWO)

jaadu: $(TRY) $(TAC) lex.yy.c y.tab.c 
	g++ $(TRY) $(TAC) lex.yy.c y.tab.c -w -o $(OUT)
	rm lex.yy.c y.tab.* 

y.tab.c1: $(ONE1)
	yacc -d $(ONE1)

lex.yy.c1: $(TWO1)
	lex $(TWO1)

compile: $(TRY1) $(SYM1) $(TAC1) lex.yy.c y.tab.c 
	g++ $(TRY1) $(TAC1) $(SYM1) lex.yy.c y.tab.c -w -o $(OUT1) 

clean:
	rm jaadu compile

clean_output:
	rm global_table.csv structures.csv output_code.txt classes.csv assembly.asm
