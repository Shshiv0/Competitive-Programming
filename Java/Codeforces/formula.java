import java.math.BigInteger;
import java.util.Scanner;

public class formula {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BigInteger a = scanner.nextBigInteger();
        BigInteger b = scanner.nextBigInteger();

        System.out.println(a.pow(b.intValue()).subtract(b.pow(a.intValue())));
    }
}