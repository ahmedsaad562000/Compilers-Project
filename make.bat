flex lexer.l
bison -d -v parser.y
gcc lex.yy.c parser.tab.c
a.exe