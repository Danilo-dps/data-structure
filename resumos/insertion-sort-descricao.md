## Descrição do Insetion Sort

- Essa implementação tem 4 variáveis, sendo uma delas um **array** de inteiros, que recebe os dados, e 3 variáveis do tipo primitivo int

- A variável  **i** controla a varredura, sinalizando quanto o **for** externo irá percorrer

- A variável **eleito** recebe o  valor que está no **array** na posição **i**, essa parte é dinamica, cada nova interação, **i** é incrementado, fazendo com que a variável **eleito** seja atualizada:

```java
 eleito = X[i];
```

- a variável **j** recebe **i - 1**, o que garante que **j** seja uma posição a menos que a posição de **i** no **array**. As variáveis **i** e **j** são variáveis usadas para guardar posição, enquanto que a variável **eleito** armazena o valor da posição

- O **while** tem duas condições: **j** precisa ser >= 0 (para não acessar posições inválidas) e **X[j]** precisa ser > **eleito** (para continuar deslocando elementos maiores)"

- O processo dentro do **while** funciona como uma **'escavação'** - abre espaço deslocando elementos maiores para a direita até encontrar a posição correta para inserir o **eleito**.

- Mesmo **j** recebendo como valor **i - 1**, a condição do **while** faz com que ele sempre percorra todo o limite de posições que ele tem acesso naquela interação, e compare todos ali, fazendo com que o numero eleito seja comparado com todos os numeros naquele limite de espaço, com ênfase no **limite de posições que ele tem acesso naquela interação**. Isso faz com que a parte inicialmente ordenada do **array**, seja comparada com o novo número eleito

- Após sair do **while**, **X[j+1]** recebe **eleito** - (é **j+1**, porque ao sair do **while**, **j** está valendo **-1**) esta é a posição exata onde o elemento deve ser inserido, já que todos os elementos maiores foram deslocados, isso porque o escopo do **while** faz a atualização dos valores a direita de **j**, ficando por fim a posição a esquerda sem ser atualizada
---