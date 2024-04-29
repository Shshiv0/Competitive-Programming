import java.util.Scanner;

public class Theatre {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextInt();
        long m = scanner.nextInt();
        long a = scanner.nextInt();

        System.out.println((long) (Math.ceil((double)m/a) * Math.ceil((double)n/a)));
    }
}