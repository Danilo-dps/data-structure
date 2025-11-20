# 🔍 Análise de Algoritmos de Ordenação

## 📊 Comparação de Desempenho

### Insertion Sort vs Bubble Sort

| Característica  | Insertion Sort | Bubble Sort (Otimizado) |
| --------------- | -------------- | ----------------------- |
| **Melhor Caso** | O(n)           | O(n)                    |
| **Caso Médio**  | O(n²)          | O(n²)                   |
| **Pior Caso**   | O(n²)          | O(n²)                   |
| **Espaço**      | O(1)           | O(1)                    |

## 🎯 Estratégias de Implementação

### Insertion Sort

```java
for (i = 1; i <= 4; i++) {
    eleito = X[i];
    j = i - 1;
    while (j >= 0 && X[j] > eleito) {
        X[j+1] = X[j];  // Deslocamento
        j--;
    }
    X[j+1] = eleito;    // Inserção na posição correta
}
```

**Vantagens:**

- **Eficiência em dados parcialmente ordenados**
- **Menos operações de troca**
- **Terminação antecipada** no laço interno
- **Adaptativo** - performance melhora com dados ordenados

### Bubble Sort Otimizado

```java
n = 1;
swap = 1;

while(n <= 5 && swap == 1){

    swap = 0;
    for(i=0; i<=3; i++){

        if(X[i] < X[i+1]){
            swap = 1;
            aux = X[i];
            X[i] = X[i+1];
            X[i+1] = aux;
        }
    }

    n = n + 1;
}
```

**Características:**

- **Flag de controle** (`swap`) para detecção de ordenação
- **Múltiplas passagens** até completa ordenação
- **Comparação par-a-par** exaustiva

## ⚡ Conclusão Técnica

O **Insertion Sort** demonstra superioridade algorítmica devido à sua abordagem de **inserção inteligente**, onde cada elemento é posicionado em sua localização correta através de comparações seletivas e deslocamentos eficientes, reduzindo operações redundantes presentes no paradigma de trocas sucessivas do Bubble Sort.
