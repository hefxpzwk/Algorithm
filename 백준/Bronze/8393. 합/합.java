import javax.imageio.IIOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int answer = number*(number+1)/2;
        System.out.println(answer);
    }
}