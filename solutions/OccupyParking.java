import java.util.Scanner;

public class OccupyParking {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = Integer.parseInt(sc.nextLine()) - 1;
            int spaces = 0;
            
            String d2 = sc.nextLine();
            String d1 = sc.nextLine();
            
            for (; n >= 0; --n)
                if (d2.charAt(n) == 'C' && d1.charAt(n) == 'C')
                    ++spaces;
            
            System.out.print(spaces);
        }
    }
}
