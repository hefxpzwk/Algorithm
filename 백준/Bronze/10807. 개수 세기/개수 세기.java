import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        int result = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int find = sc.nextInt();
        for (int i : arr) {
            if (i == find) {
                result++;
            }
        }

        System.out.println(result);

    }
}