import java.util.Scanner;

public class CCC18J1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] digits = new int[4];

        for (int i=0; i<4; i++) {
            int t = scanner.nextInt();
            digits[i] = t;
        }

        if ((digits[0] == 8 || digits[0] == 9) && (digits[1] == digits[2]) && (digits[3] == 8 || digits[3] == 9)) {
            System.out.println("ignore");
        }
        else {
            System.out.println("answer");
        }
    }
}