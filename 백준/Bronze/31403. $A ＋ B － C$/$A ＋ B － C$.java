import java.util.Scanner;

public class Main {
    final static int n = 3;

    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);

        int[] array = inputNumbers(sc);
        System.out.println(calcNumberMode(array));
        System.out.println(calcStringMode(array));
    }

    public static int[] inputNumbers(Scanner sc) {
        int[] num = new int[n];

        for(int i = 0; i < n; i++) {
            num[i] = sc.nextInt();
        }
        return num;
    }

    public static int calcNumberMode(int[] num) {
        return num[0] + num[1] - num[2];
    }

    public static int calcStringMode(int[] num) {
        String s = "";
        s += num[0];
        s += num[1];
        return Integer.parseInt(s) - num[2];
    }
}