
import java.util.Scanner;

public class BubbleSort {
    public static void main(String args[]) {
        try (Scanner scanner = new Scanner(System.in)) {

            int X[] = new int[5];
            int n, i, aux;

            // carregando os números no vetor
            for (i = 0; i <= 4; i++) {
                System.out.println("Digite o " + (i + 1) + "º número : ");
                X[i] = scanner.nextInt();
            }   
            
            // ordenando de forma crescente
            // laço com a quantidade de elementos do vetor
            for (n = 1; n <= 5; n++) {
                
                // laço que percorre da primeira à
                // penúltima posição do vetor
                for (i = 0; i <= 3; i++) {
                    if (X[i] > X[i + 1]) {
                        aux = X[i];
                        X[i] = X[i + 1];
                        X[i + 1] = aux;
                    }
                }
            }   
            
            // mostrando o vetor ordenado
            for (i = 0; i <= 4; i++) {
                System.out.println((i + 1) + "º número: " + X[i]);
            }
        }
    }
}