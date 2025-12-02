
import java.util.Scanner;

public class MergeSort {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {

            int[] X = new int[10];
            int i;

            // carregando os números no vetor
            for (i = 0; i <= 9; i++) {
                System.out.println("Digite o " + (i + 1) + "º número : ");
                X[i] = scanner.nextInt();
            }   
            
            // ordenando de forma crescente
          
            merge(X, 0, 9);
            
            // mostrando o vetor ordenado
            for (i = 0; i <= 9; i++) {
                System.out.println((i + 1) + "º número: " + X[i]);
            }
        }
    }

    public static void merge(int[] X, int inicio, int fim){
        int meio;
        if(inicio < fim){
            meio = (inicio + fim) / 2;
            merge(X, inicio, meio);
            merge(X, meio+1, fim);
            intercala(X, inicio, fim, meio);
        }
    }

    public static void intercala(int[] X, int inicio, int fim, int meio){
        int posLivre, inicioVetor1, inicioVetor2, i;
        int[] aux = new int[10];
        inicioVetor1 = inicio;
        inicioVetor2 = meio + 1;
        posLivre = inicio;
        
        while(inicioVetor1 <= meio && inicioVetor2 <= fim){
            if(X[inicioVetor1] <= X[inicioVetor2]){
                aux[posLivre] = X[inicioVetor1];
                inicioVetor1 = inicioVetor1 + 1;
            } else{
                aux[posLivre] = X[inicioVetor2];
                inicioVetor2 = inicioVetor2 + 1;
            }
            posLivre = posLivre + 1;
        }

        // se ainda existem números no primeiro vetor
        //que não foram intercalados
        for(i=inicioVetor1; i <= meio; i++){
            aux[posLivre] = X[i];
            posLivre = posLivre + 1;
        }

        // se ainda existem números no segundo vetor
        //que não foram intercalados
        for(i=inicioVetor2; i <= fim; i++){
            aux[posLivre] = X[i];
            posLivre = posLivre + 1;
        }

        // retorna os valores do vetor aux para o vetor X
        for(i = inicio; i<= fim; i++){
           X[i] = aux[i];
        }
    }
}