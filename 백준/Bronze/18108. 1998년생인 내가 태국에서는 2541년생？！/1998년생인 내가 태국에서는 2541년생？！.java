import java.util.Scanner;

public class Main {

    final static int YEAR_DIFF = 543;

    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);

        int thaiYear = inputYear(sc);
        System.out.println(toCurrentYear(thaiYear));
    }

    public static int inputYear(Scanner sc) {
        return sc.nextInt();
    }

    public static int toCurrentYear(int thaiYear) {
        return thaiYear - YEAR_DIFF;
    }
}