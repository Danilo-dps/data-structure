#include <iostream>
#include <cstdlib>  // Para system()
using namespace std;

int main()  // void main() não é padrão, use int main()
{
    int X[5], j, i, aux;
    system("clear");  // Substitui clrscr() no Linux
    
    // carregando os números no vetor
    for (i = 0; i <= 4; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> X[i];
    }
    
    // ordenando de forma crescente (Bubble Sort)
    // laço com a quantidade de elementos do vetor -1
    for (j = 1; j <= 4; j++)
    {
        // laço que percorre da última posição à posição j do vetor
        for (i = 4; i >= j; i--)
        {
            if (X[i] < X[i - 1])
            {
                aux = X[i];
                X[i] = X[i - 1];
                X[i - 1] = aux;
            }
        }
    }
    
    // mostrando o vetor ordenado
    cout << "\nVetor ordenado:\n";
    for (i = 0; i <= 4; i++)
    {
        cout << i + 1 << "º número: " << X[i] << "\n";
    }
    
    // Substituindo getch()
    cout << "\nPressione Enter para continuar...";
    cin.ignore();  // Limpa o buffer do teclado
    cin.get();     // Espera Enter
    
    return 0;  // Necessário com int main()
}