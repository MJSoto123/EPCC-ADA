Simulación Insert Sort
-------------

Insert Sort Algorithm
```javascript
void InsertSort(int * A, int n){
    for(int i = 1 ; i < n ; i++){
        int key = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] >key){
            A[j + 1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
```
Simulación

	A = [14, 27, 10 , 22, 3]
Primera iteración (i = 1 , key =27)
| j      |    0 |
| --------- | -----:|
| A[j] > key | (14 > 27)  = FALSE  |

Actualizamos A[1] = 27

	A = [14, 27, 10 , 22, 3]
Segunda iteración (i = 2 , key =10)
| j      |    1 |
| --------- | -----:|
| A[1] > key | (27 > 10)  = TRUE  |
|  Array A    |  [14, 27, 27 , 22, 3 ]|

| j      |    0 |
| --------- | -----:|
| A[j] > key | (14 > 10)  = TRUE  |
|  Array A    |  [14, 14, 27 , 22, 3 ]|

| j      |    -1 |
| --------- | -----:|
| j >= 0 |  FALSE  |

Actualizamos A[0] = 10

	A = [10, 14, 27 , 22, 3]

Tercera iteración (i = 3 , key =22)
| j      |    2 |
| --------- | -----:|
| A[2] > key | (27 > 22)  = TRUE  |
|  Array A    |  [10, 14, 27 , 27, 3]|

| j      |    1 |
| --------- | -----:|
| A[1] > key | (14 > 22)  = FALSE  |

Actualizamos A[2] = 22

	A = [10, 14, 22 , 27, 3]

Cuarta iteración (i = 4 , key =3)
| j      |    3 |
| --------- | -----:|
| A[3] > key | (27 > 3)  = TRUE  |
|  Array A    |  [10, 14, 22 , 27, 27]|

| j      |    2 |
| --------- | -----:|
| A[2] > key | (22 > 3)  = TRUE  |
|  Array A    |  [10, 14, 22 , 22, 27]|

| j      |    1 |
| --------- | -----:|
| A[1] > key | (14 > 3)  = TRUE  |
|  Array A    |  [10, 14, 14 , 22, 27]|

| j      |    0 |
| --------- | -----:|
| A[1] > key | (10 > 3)  = TRUE  |
|  Array A    |  [10, 10, 14 , 22, 27]|

| j      |    -1 |
| --------- | -----:|
| j >= 0 |  FALSE  |

Actualizamos A[0] = 3

	A = [3, 10, 14 , 22, 27]

Finalmente el array "A" está ordenado ascendentemente
