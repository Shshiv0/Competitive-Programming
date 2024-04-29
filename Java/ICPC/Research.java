import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Research {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 

        int g = scanner.nextInt();

        Queue<Integer> results = new LinkedList<>(); 
        
        for (int i=0; i<g; i++) {
            int n = scanner.nextInt();
            int[] nums = new int[n];
            
            for (int j=0; j<n; j++) {
                int t = scanner.nextInt();
                nums[j] = t;
            }

            int l = nums[0], h = nums[0];
            for (int k=0; k<n; k++) {
                if (l > nums[i]) {
                    l = nums[i];
                }
                if (h < nums[i]) {
                    h = nums[i];
                }
            }
            results.add(l);
            results.add(h);
        }

        Iterator<Integer> iterator = results.iterator();
        while (iterator.hasNext()) {
            int res = iterator.next();
            for (int i=1; i<=g*2; i++) {
                System.err.print(res);
                if(i%2 == 0) {
                    System.err.println();
                }
            }
        }
    }
}