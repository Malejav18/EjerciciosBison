## ⚡ Ejecucion

```
bison -d ej-1.y
flex -o ej-1.lex.c ej-1.l
gcc ej-1.tab.c ej-1.lex.c ej-1.c
./a.out
```

### Funcionamiento

En este caso se realiza un cambio para que a la hora de utilizar los bucles "while" y "for" puedan ser un poco más intuitivos. Ahora el "while" termina con la palabra "done" y el "if" con la palabra "fi".

Prueba de correcto funcionamiento:
<img width="364" alt="image" src="https://github.com/user-attachments/assets/537dc237-145b-4453-97f2-e34ed072ac41" />
