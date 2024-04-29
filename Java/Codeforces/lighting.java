import java.util.Scanner;
 
public class lighting {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		
		for (int c=0; c<t; c++) {
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			
            if (n%2==0) {
				System.out.println((n/2)*m);
            }
            else if (m%2==0) {
				System.out.println((m/2)*n);
            }
            else {
				System.out.println((m/2)*n + n/2 + 1);
            }
        }
	}
}