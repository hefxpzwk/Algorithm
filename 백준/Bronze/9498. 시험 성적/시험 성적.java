import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);

        int score = sc.nextInt();
        char answer = 'F';
        if (score >= 90) {
            answer = 'A';
        }
        else if (score >= 80) {
            answer = 'B';
        }
        else if (score >= 70) {
            answer = 'C';
        }
        else if (score >= 60) {
            answer = 'D';
        }

        System.out.println(answer);
    }
}