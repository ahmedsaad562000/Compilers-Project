flex lexer.l
bison -d -v parser.y
g++ lex.yy.c parser.tab.c ./SymbolTable/SymbolTable.cpp ./SymbolTable/SymbolTableEntry.cpp ./CodeGen/CodeGenerator.cpp ./CodeGen/quad.cpp
a.exe