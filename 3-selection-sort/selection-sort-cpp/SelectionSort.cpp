#include <iostream>
#include <cstdlib> // Para system()
using namespace std;

int main() // void main() não é padrão, use int main()
{
    int X[5];
    int i, j, eleito, menor, pos;
    system("clear"); // Substitui clrscr() no Linux

    // carregando os números no vetor
    for (i = 0; i <= 4; i++){
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> X[i];
    }

    // ordenando de forma crescente
    // laço que percorre da 1ª posição à
    // penúltima posição do vetor
    // elegendo um número para ser comparado
    for (i = 0; i <= 3; i++){

        eleito = X[i];
        // encontrando o menor número à direita do eleito
        // com sua respectiva posição
        // posição do eleito = i
        // primeiro número à direita do e leito
        // na posição= i + 1

        menor = X[i + 1];
        pos = i + 1;
        /*
          laço que percorre os elementos
          que estão à direita do
          número eleito, retornando o menor número à
          direita e sua posição
        */
        for (j = i + 2; j <= 4; j++){
            if (X[j] < menor){
                menor = X[j];
                pos = j;
            }
        }

        /*
        troca do número eleito com o número da posição pos
        o número da posição pos é o menor número à direita
        do número eleito
        */

        if (menor < eleito){
            X[i] = X[pos];
            X[pos] = eleito;
        }
    }

    // mostrando o vetor ordenado
    cout << "\nVetor ordenado:\n";
    for (i = 0; i <= 4; i++) {
        cout << i + 1 << "º número: " << X[i] << "\n";
    }

    // Substituindo getch()
    cout << "\nPressione Enter para continuar...";
    cin.ignore(); // Limpa o buffer do teclado
    cin.get();    // Espera Enter

    return 0; // Necessário com int main()
}