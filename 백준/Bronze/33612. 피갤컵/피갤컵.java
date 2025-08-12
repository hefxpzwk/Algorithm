import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        int yearStart = 2024;
        int monthStart = 8;
        int n = sc.nextInt();

        for (int i = 2; i <= n; i++) {
            if ((monthStart += 7) > 12) {
                monthStart -= 12;
                yearStart += 1;
            }
        }
        System.out.printf("%d %d", yearStart, monthStart);
    }
}