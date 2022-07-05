import java.util.Scanner;

class LoanCalculator {
    public static void main(String[] args) {
		try (Scanner scanner = new Scanner(System.in)) {
            int amount = scanner.nextInt();
            for(int x=0; x<3;x++){
            	amount -= amount*(0.1);
            }
            System.out.println(amount);
        }
		
	}
}
