####EJERCICIO 7

    p =0
	for (int i = 1;  i < n;  i = i * 2){
		p++;
	}
	for (int j= 1;  i < p;  j = j * 2){
		statement;
	}
    
##### Análisis de Complejidad
- Es facil notar que para el primer bucle el valor de **p** se incrementara una vez por cada iteración, ya que la complejidad de este primer bucle for es **O(log(n))**, podemos decir que el valor de **p** al final del primer bucle es** log(n)** acotado por su techo.
- Complejidad del primer bucle for: **O(log(n))**
- Para el segundo bucle tenemos que tambien tiene una complejidad logaritmica respecto de **p**, por lo tanto la complejidad del segundo bucle es de  **O(log(p))**.
- Si reemplazamos el valor de **p** obtenemos:
- Complejidad del segundo bucle for **O(log(logn))**
- Finalmente podemos concluir que en general la complejidad  representativa del algoritmo es **O(log(n))** .
