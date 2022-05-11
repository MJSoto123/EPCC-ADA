####EJERCICIO 8

    
	for (int i = 0;  i < n;  i++){
		for(int j = 1; j < n; j = j * 2){
		statement;
		}
	}
    
##### Análisis de Complejidad
- Es claro que el primer bucle for  tiene una complejidad de **O(n)**
- Respecto al bucle anidado podemos decir que tiene una complejidad logaritmica acotada por su techo, es decir, tiene una complejidad de **O(log(n))**.
- Finalmente podemos concluir que la complejidad del algoritmo en general es de **O(n log(n))**.