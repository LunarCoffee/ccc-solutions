import java.util.Scanner;

public class TelemarketerOrNot {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = sc.nextInt();
            
            if ((a == 8 || a == 9) && (d == 8 || d == 9) && (b == c)) {
                System.out.print("ignore");
            } else {
                System.out.print("answer");
            }
        }
    }
}
