#include <iostream>
#include <cstdlib> // Para system()
using namespace std;

void intercala(int X[], int inicio, int fim, int meio)
{
    int posLivre, inicioVetor1, inicioVetor2, i;
    int aux [10];
    inicioVetor1 = inicio;
    inicioVetor2 = meio + 1;
    posLivre = inicio;

    while (inicioVetor1 <= meio && inicioVetor2 <= fim)
    {
        if (X[inicioVetor1] <= X[inicioVetor2])
        {
            aux[posLivre] = X[inicioVetor1];
            inicioVetor1 = inicioVetor1 + 1;
        }
        else
        {
            aux[posLivre] = X[inicioVetor2];
            inicioVetor2 = inicioVetor2 + 1;
        }
        posLivre = posLivre + 1;
    }

    // se ainda existem números no primeiro vetor
    // que não foram intercalados
    for (i = inicioVetor1; i <= meio; i++)
    {
        aux[posLivre] = X[i];
        posLivre = posLivre + 1;
    }

    // se ainda existem números no segundo vetor
    // que não foram intercalados
    for (i = inicioVetor2; i <= fim; i++)
    {
        aux[posLivre] = X[i];
        posLivre = posLivre + 1;
    }

    // retorna os valores do vetor aux para o vetor X
    for (i = inicio; i <= fim; i++)
    {
        X[i] = aux[i];
    }
}

void merge(int X[], int inicio, int fim)
{
    int meio;
    if (inicio < fim)
    {
        meio = (inicio + fim) / 2;
        merge(X, inicio, meio);
        merge(X, meio + 1, fim);
        intercala(X, inicio, fim, meio);
    }
}

int main() // void main() não é padrão, use int main()
{
    int X[10];
    int i;
    system("clear"); // Substitui clrscr() no Linux

    // carregando os números no vetor
    for (i = 0; i <= 9; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> X[i];
    }

    // ordenando de forma crescente
    merge(X, 0, 9);

    // mostrando o vetor ordenado
    cout << "\nVetor ordenado:\n";
    for (i = 0; i <= 9; i++)
    {
        cout << i + 1 << "º número: " << X[i] << "\n";
    }

    // Substituindo getch()
    cout << "\nPressione Enter para continuar...";
    cin.ignore(); // Limpa o buffer do teclado
    cin.get();    // Espera Enter

    return 0; // Necessário com int main()
}