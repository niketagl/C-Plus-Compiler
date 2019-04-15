all: y.tab.c lex.yy.c jaadu
ONE=src/codegen.y
TWO=src/codegenlex.l
TRY=src/codegentry.cpp
TAC=src/codegentac.cpp
OUT=jaadu
y.tab.c: $(ONE)
	yacc -d $(ONE)

lex.yy.c: $(TWO)
	lex $(TWO)

jaadu: $(TRY) $(TAC) lex.yy.c y.tab.c 
	g++ $(TRY) $(TAC) lex.yy.c y.tab.c -w -o $(OUT) 

clean:
	rm jaadu lex.yy.c y.tab.c y.tab.h

clean_output:
	rm global_table.csv structures.csv output_code.txt classes.csv
