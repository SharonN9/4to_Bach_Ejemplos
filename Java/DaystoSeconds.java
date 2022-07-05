import java.util.Scanner;

class DaystoSeconds {
	public static void main(String[] args) {
		try (Scanner scanner = new Scanner(System.in)) {
            int days = scanner.nextInt();
            int seconds = days * 24 * 60 * 60; 
            System.out.println(seconds);
            //your code goes here
        }
		
	}
}