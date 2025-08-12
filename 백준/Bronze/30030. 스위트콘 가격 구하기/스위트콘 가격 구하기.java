import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);

        int sweetcornPriceWithVat = sc.nextInt();
        int sweetcornPrice;

        sweetcornPrice = sweetcornPriceWithVat * 10 / 11;
        System.out.println(sweetcornPrice);

    }
}