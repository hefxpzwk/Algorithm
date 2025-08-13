import java.util.Scanner;

public class Main {

    private static final String[] CHEERING = {
            "HIGHSCHOOL",
            "MASTER",
            "0611",
            "CONTEST"
    };

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int chant = inputChats(sc);
        if(chant < 0) {
            return;
        }
        System.out.println(CHEERING[chant]);
    }

    public static int inputChats(Scanner sc) {
        String chants = sc.nextLine();
        if(chants.equals("SONGDO")) return 0;
        else if(chants.equals("CODE")) return 1;
        else if(chants.equals("2023")) return 2;
        else if(chants.equals("ALGORITHM")) return 3;
        else return -1;
    }

}