#include <iostream>
#include <cstdlib> // Para system()
using namespace std;

int main() // void main() não é padrão, use int main()
{
    int X[5];
    int i, j, eleito;
    system("clear"); // Substitui clrscr() no Linux

    // carregando os números no vetor
    for (i = 0; i <= 4; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> X[i];
    }

    // ordenando de forma crescente
    // laço com a quantidade de elementos do vetor -1
    for (i = 1; i <= 4; i++)
    {

        eleito = X[i];
        j = i - 1;
        // laço que percorre os elementos à
        // esquerda do número eleito
        // ou até encontrar a posição  para
        // relocação do número eleito
        // respeitando a ordenação
        while (j >= 0 && X[j] > eleito)
        {
            X[j + 1] = X[j];
            j = j - 1;
        }
        X[j + 1] = eleito;
    }

    // mostrando o vetor ordenado
    cout << "\nVetor ordenado:\n";
    for (i = 0; i <= 4; i++)
    {
        cout << i + 1 << "º número: " << X[i] << "\n";
    }

    // Substituindo getch()
    cout << "\nPressione Enter para continuar...";
    cin.ignore(); // Limpa o buffer do teclado
    cin.get();    // Espera Enter

    return 0; // Necessário com int main()
}