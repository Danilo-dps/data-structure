#include <iostream>
#include <cstdlib>  // Para system()
using namespace std;

int main()  // void main() não é padrão, use int main()
{
    int X[5], n, i, aux, swap;
    system("clear");  // Substitui clrscr() no Linux
    
    // carregando os números no vetor
    for (i = 0; i <= 4; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> X[i];
    }
    
    // ordenando de forma decrescente
    //laço com a quantidade de elementos do vetor
    //e enquanto houver troca

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