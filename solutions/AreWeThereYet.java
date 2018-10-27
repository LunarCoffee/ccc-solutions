import java.util.Scanner;

public class AreWeThereYet {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int dist = 0;
            int[] dists = new int[4];
            
            for (int i = 0; i < 4; ++i)
                dists[i] = sc.nextInt();
                
            for (int i = 0; i < 5; ++i) {
                for (int j = 0; j < 5; ++j) {
                    dist = 0;
                    
                    for (int k = 0; k < Math.abs(j - i); ++k) {
                        dist += dists[k + Math.min(i, j)];
                    }
                    System.out.print(dist + " ");
                }
                System.out.println();
            }
        }
    }
}
