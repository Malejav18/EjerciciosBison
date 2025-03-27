# seccion 3-1 
## ejecucion

```
bison -d fb3-1.y
flex -o fb3-1.lex.c fb3-1.l
gcc fb3-1.tab.c fb3-1.lex.c fb3-1funcs.c
./a.out
```
