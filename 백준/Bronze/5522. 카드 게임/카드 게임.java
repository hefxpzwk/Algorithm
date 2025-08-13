import java.util.Scanner;

public class Main {

    final static int N = 5;

    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);

        int[] scores = inputScores(sc);
        System.out.println(totalScore(scores));
    }

    public static int[] inputScores(Scanner sc) {
        int[] inputScore = new int[N];
        for(int i = 0;i < N;i++) {
            inputScore[i] = sc.nextInt();
        }
        return inputScore;
    }

    public static int totalScore(int[] scores) {
        int totalScore = 0;
        for(int i = 0;i < N;i++) {
            totalScore += scores[i];
        }
        return totalScore;
    }
}