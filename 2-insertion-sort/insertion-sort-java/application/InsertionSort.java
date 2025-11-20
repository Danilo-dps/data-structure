
import java.util.Scanner;

public class InsertionSort {
    public static void main(String args[]) {
        try (Scanner scanner = new Scanner(System.in)) {

            int X[] = new int[5];
            int i, j, eleito;

            // carregando os números no vetor
            for (i = 0; i <= 4; i++) {
                System.out.println("Digite o " + (i + 1) + "º número : ");
                X[i] = scanner.nextInt();
            }   
            
            // ordenando de forma crescente
            // laço com a quantidade de elementos do vetor -1
            for (i = 1; i <= 4; i++) {
                
                eleito = X[i];
                j = i - 1;
                // laço que percorre os elementos à
                // esquerda do número eleito
                // ou até encontrar a posição  para 
                // relocação do número eleito
                // respeitando a ordenação
                while( j>= 0 && X[j] > eleito){
                    X[j+1] = X[j];
                    j = j - 1;
                }
                X[j+1] = eleito;
            }   
            
            // mostrando o vetor ordenado
            for (i = 0; i <= 4; i++) {
                System.out.println((i + 1) + "º número: " + X[i]);
            }
        }
    }
}