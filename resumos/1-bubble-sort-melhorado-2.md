## 📝 **BUBBLE SORT MELHORADO 2**

**Estrutura do algoritmo:**
1. **Entrada de dados**: Coleta 5 números via Scanner
2. **Loop principal**: `while` com duas condições:
   - Controle de passagens (`n <= 5`)
   - **Flag de otimização** (`swap == 1`)
3. **Comparação e troca**: `if(X[i] < X[i+1])` + mecanismo de troca com `aux`
4. **Detecção de ordenação**: Se nenhuma troca ocorrer, algoritmo para
5. **Saída**: Exibe array ordenado

**Mecanismos chave:**
- **`aux`**: Variável auxiliar para **troca de valores** entre posições
- **`swap`**: Flag que indica se **houve trocas** na passagem atual
- **Otimização**: Interrompe execução quando detecta que o array já está ordenado

**Vantagem**: Evita passagens desnecessárias quando o array já está ordenado!

### **Sobre a variável auxiliar:**

```java
aux = X[i];          // variável auxiliar para troca
swap = 1;            // flag de controle (não é auxiliar para troca)
```
- **`aux`** → variável auxiliar para **troca de valores**
- **`swap`** → variável de **controle/flag** para otimização

**Sequência do while:**
1. `swap = 0` → assume que não haverá trocas
2. Percorre o array com `for` 
3. Se encontrar elementos fora de ordem: `swap = 1`
4. Se após o `for` completo `swap == 0` → vetor ordenado, **para o loop**