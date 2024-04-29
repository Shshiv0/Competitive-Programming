import java.util.Arrays;
import java.util.Scanner;

public class si {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        for (int c=0; c<t; c++) {
            int n = scanner.nextInt();            
            int [] a = new int[100001];
    
            for (int i=0; i<n; i++) {
                a[i] = scanner.nextInt();
            }
            
            Arrays.sort(a, 0, n);
            int k = 0;
            int m = 0;
            
            for (int i=0; i<n; i++) {
                m = Math.max(m, a[i]);
                if (m <= i + 1) k = i + 1;
            }
            
            System.out.println(k + 1);
        }
    }
}