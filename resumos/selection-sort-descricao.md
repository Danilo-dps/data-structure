## **Descrição do Selection Sort**

- Essa implementação tem 5 variáveis, sendo uma delas um **array** de inteiros, que recebe os dados, e 4 variáveis do tipo primitivo int

- A variável  **i** controla a varredura, sinalizando quanto o **for** externo irá percorrer

- As variáveis **i**, **j** e **pos** são variáveis usadas para guardar posições, enquanto que as variáveis **eleito** e **menor** armazenam o valores de posições

- A variavel **eleito** é o elemento na posição atual **i** que pode ser substituído se encontrarmos um elemento menor à sua direita

- A variável **menor** recebe o valor que se encontra na posição de **i + 1**, enquanto que a variável **j** recebe posição de **i + 2**,isso cria um fluxo onde **j** está a direita de **menor**.

- O **for** interno está delimitado a fazer a varredura nos limites de **j**, nesse trecho, ele faz comparações, e se a condição **X[j]** < **menor** for satisfeita, ele troca os valores e atualiza a variável de posição **pos**, para receber o valor de **j**

- A condição **if(menor < eleito)** é uma otimização - evita trocas desnecessárias quando o elemento atual já é o menor

### **Forma ilustrativa**:
```java
 // eleito(X[i]) - menor(X[i+1] inicialmente) - X[j] (começando em i+2)]
```