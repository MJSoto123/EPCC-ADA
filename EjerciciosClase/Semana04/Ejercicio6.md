####EJERCICIO 6

    for (int i = 0; i*i < n; i++){
		statement;
	}
    
##### Análisis de Complejidad
La complejidad del algoritmo es raiz cuadrada de n o O(n^1/2).
Es facil notar que esto es cierto, ya que el valor de "i" ira incrementandose y el bucle se detendrá cuando el cuadrado de "i" sea mayor que "n".
Esto es lo mismo que preguntarse cuanto es la raiz cuadrada de n.
###### Algunos ejemplos que ilustran el proceso:
| i     | n |
| --------- | -----:|
| 0     | 4 |
| 1     |   4 |
| 2     |    4 |
En este caso solo se realizan 2 operaciones con i = 0 y con i = 1.
Cuando se evalua i = 2, el bucle se rompe.
- Cabe recalcar que cuando "n" es un cuadrado perfecto se cumple que son exactamente n^1/2 operaciones.
- Cuando "n" no es  cuadrado perfecto se cumple que la cantidad de operaciones es la funcion techo de n^1/2.

En el siguiente ejemplo se ilustra esta idea, ya que n= 6 realiza 3 operaciones antes de romper el bucle.
La funcion techo de 6^1/2 es 3.

| i     | n |
| --------- | -----:|
| 0     | 6 |
| 1     | 6 |
| 2     | 6 |
| 3     | 6 |
Con i = 3, el bucle se rompe. Se realizaron 3 iteraciones.