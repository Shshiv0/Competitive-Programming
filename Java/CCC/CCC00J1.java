import java.util.Scanner;

public class CCC00J1{
    public static void main(String[]agrs) {
	    Scanner scanner = new Scanner(System.in);
	    
        int m = scanner.nextInt();
	    int d = scanner.nextInt();
	    
        System.out.println("Sun Mon Tue Wed Thr Fri Sat");
	    
        for(int i=(4*(m-1))+2; i>2; i--) {
		    System.out.print(" ");
	    }
	    
        for(int i=1; i<=d; i++, m++) {
		    if(m == 8) {
			    System.out.println();
			    m = 1;
		    }

		    if(i <= 9) {
			   System.out.print("  " + i);
		    }
		    
            else {
			    System.out.print(" " + i);
		    }
		    System.out.print(" ");
	    }
	}
}