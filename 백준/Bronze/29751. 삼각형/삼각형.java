import javax.imageio.IIOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        int weight = sc.nextInt();
        int height = sc.nextInt();
        double answer = (double) weight*height/2;
        System.out.println(answer);
    }
}