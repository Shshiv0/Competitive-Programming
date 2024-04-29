import java.util.Scanner;

public class CCC01J1{
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int h = scanner.nextInt();
        
        int i=0;
        int j=0;
        
        for (i=1; i<=h; i=i+2) {
            for (j=0; j<i; j++) {
    	        System.out.print("*");
            }
            
            for (j=2*i; j<2*h; j++) {
    	        System.out.print(" ");
            }
            
            for (j=0; j<i; j++) {
    	        System.out.print("*");
            }
            System.out.println();
        }
        
        for (i=h-2; i>0; i=i-2) {
            for (j=0; j<i; j++) {
    	        System.out.print("*");
            }
            
            for (j=2*i; j<2*h; j++) {
    	        System.out.print(" ");
            }
            
            for (j=0; j<i; j++) {
    	        System.out.print("*");
            }
            System.out.println();
        }
    }
}