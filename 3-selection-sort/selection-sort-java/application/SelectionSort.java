
import java.util.Scanner;

public class SelectionSort {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {

            int X[] = new int[5];
            int i, j, eleito, menor, pos;

            // carregando os números no vetor
            for (i = 0; i <= 4; i++) {
                System.out.println("Digite o " + (i + 1) + "º número : ");
                X[i] = scanner.nextInt();
            }   
            
            // ordenando de forma crescente
            // laço que percorre da 1ª posição à
            // penúltima posição do vetor
            // elegendo um número para ser comparado
            for (i = 0; i <= 3; i++) {
                
                eleito = X[i];
                // encontrando o menor número à direita do eleito
                // com sua respectiva posição
                // posição do eleito = i
                // primeiro número à direita do e leito
                // na posição= i + 1

                menor = X[i+1];
                pos = i + 1;
                /*
                  laço que percorre os elementos
                  que estão à direita do
                  número eleito, retornando o menor número à
                  direita e sua posição
                */
                for(j=i+2; j<=4; j++){
                    if(X[j] < menor){
                        menor = X[j];
                        pos = j;
                    }
                }

                /*
                troca do número eleito com o número da posição pos
                o número da posição pos é o menor número à direita
                do número eleito
                */

                if(menor < eleito){
                    X[i] = X[pos];
                    X[pos] = eleito;
                }
            }   
            
            // mostrando o vetor ordenado
            for (i = 0; i <= 4; i++) {
                System.out.println((i + 1) + "º número: " + X[i]);
            }
        }
    }
}