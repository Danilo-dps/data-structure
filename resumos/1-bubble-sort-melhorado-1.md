# BUBBLE SORT 
---

**O algoritmo Bubble Sort implementado:**
1. **Entrada de dados**: Um loop coleta 5 números do usuário e os armazena no array
2. **Ordenação**: Dois loops aninhados comparam cada elemento com seu vizinho
3. **Troca**: Se um elemento for maior que o próximo, eles trocam de posição
4. **Repetição**: Este processo se repete até que todos os elementos estejam ordenados
5. **Saída**: O array ordenado é exibido

- Fazendo uso de uma variável **auxiliar(Mecanismo de troca)**, é feito uma comparação no if, caso o número atual seja maior que o próximo número, a variável auxiliar recebe esse número maior, a posição que está com o número maior passa a receber o número menor, e a posição do número menor passa a receber o número maior que foi passado para a variável auxiliar.

- Essa versão usa os laços de ordenação de forma a manter o registro do progesso do trabalho feito, o `for` interno está disposto de uma forma que permite que ele percorra a comparação, e a cada volta concluida, ele avança uma posição no `array` 
