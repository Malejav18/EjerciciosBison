## Ejecucion

bison -d ej-1.y
flex -o ej-1.lex.c ej-1.l
gcc ej-1.tab.c ej-1.lex.c ej-1.c
./a.out
