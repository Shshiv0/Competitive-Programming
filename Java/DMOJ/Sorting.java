import java.util.Scanner;

class Sorting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] nums = new int[n];

        for(int i=0; i<n; i++) {
            int t = scanner.nextInt();
            nums[i] = t;
        }
        
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if (nums[j] < nums[i]) {
                    int temp;
                    temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        
        for(int i=0; i<n; i++) {
            System.out.println(nums[i]);
        }
    }
}