run:
	./combo.exe
all: lex yacc run
lex:
	flex lexer.l

yacc:
	bison -d -v parser.y
	g++ -o combo lex.yy.c parser.tab.c ./SymbolTable/SymbolTable.cpp ./SymbolTable/SymbolTableEntry.cpp ./CodeGen/CodeGenerator.cpp ./CodeGen/quad.cpp
move:
	mkdir -p ./build
	mkdir -p ./output
	mv lex.yy.c ./build
	mv parser.tab.h ./build
	mv parser.tab.c ./build
	mv parser.output ./build
clean:
	rm -f lex.yy.c parser.tab.c parser.tab.h combo.exe *.o *.output *.out 

run:
	./combo.exe

test:
	./compiler < test.c


