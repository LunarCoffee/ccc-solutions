import java.util.Scanner;

public class ccc11j1 {
    private static void whichAliens(int antennae, int eyes) {
        if (antennae >= 3 && eyes <= 4)
            System.out.println("TroyMartian");
        if (antennae <= 6 && eyes >= 2)
            System.out.println("VladSaturnian");
        if (antennae <= 2 && eyes <= 3)
            System.out.println("GraemeMercurian");
    }
    
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            whichAliens(sc.nextInt(), sc.nextInt());
        }
    }
}
