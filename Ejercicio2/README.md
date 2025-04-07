## ⚡ Ejecucion

```
bison -d ej-2.y
flex -o ej-2.lex.c ej-2.l
gcc ej-2.tab.c ej-2.lex.c ej-2.c
./a.out
```

### 💥 Ejemplo de prueba

```
let t(x,y,z)=x+y+z;
a=4
b=2 
t(b=2,b-a,a)
```

Resultado de la ejecución:


<img width="183" alt="image" src="https://github.com/user-attachments/assets/c7b04032-c95b-41b9-a00b-7b8fbd0b2540" />


Al probar el ejemplo anterior en el código base y el editado para el segundo punto, podemos comprobar que no hay fallos en la ejecucion de funciones declaradas por el usuario, y los resultados de dichas funciones dan los mismos resultados que en el programa original.
