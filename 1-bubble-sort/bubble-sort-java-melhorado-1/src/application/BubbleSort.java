
import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {

            int[] X = new int[5];
            int j, i, aux;

            // carregando os números no vetor
            for (i = 0; i <= 4; i++) {
                System.out.println("Digite o " + (i + 1) + "º número : ");
                X[i] = scanner.nextInt();
            }   
            
            // ordenando de forma crescente
            // laço com a quantidade de elementos do vetor - 1
            for (j = 1; j <= 4; j++) {
                
                //laço que percorre da última posição à posição j do vetor
                for (i = 4; i >= j; i--) {
                    if (X[i] < X[i - 1]) {
                        aux = X[i];
                        X[i] = X[i - 1];
                        X[i - 1] = aux;
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