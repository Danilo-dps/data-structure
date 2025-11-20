# BUBBLE SORT 
---

**O algoritmo Bubble Sort implementado:**
1. **Entrada de dados**: Um loop coleta 5 números do usuário e os armazena no array
2. **Ordenação**: Dois loops aninhados comparam cada elemento com seu vizinho
3. **Troca**: Se um elemento for maior que o próximo, eles trocam de posição
4. **Repetição**: Este processo se repete até que todos os elementos estejam ordenados
5. **Saída**: O array ordenado é exibido

- Fazendo uso de uma variável **auxiliar(Mecanismo de troca)**, é feito uma comparação no if, caso o número atual seja maior que o próximo número, a variável auxiliar recebe esse número maior, a posição que está com o número maior passa a receber o número menor, e a posição do número menor passa a receber o número maior que foi passado para a variável auxiliar.

- Essa versão do **buble sort** tem como estrutura de ordenação, mais uma variável **auxiliar**, que nesse caso, serve como valor para a condição de percorrer ou não todo o array. A ordenação começa, e faz uma atualização no valor dela antes de ir para o for, e outra quando a condição do `if` é satisfeita, ela serve como guia, indicando se o vetor já está ordenado ou não.

- Note que de primeiro momento, sempre é feito o fluxo de percorrer o vetor, pelo menos uma vez, e nesse fluxo, toda a ordenação que deverá ser feita, ocorre, tornando o fluxo otimizado, porque o `for` interno irá percorrer todo o `array`
