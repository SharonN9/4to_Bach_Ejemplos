import java.util.Scanner;

class ReverseString {
	public static void main(String[] args) {
		try (Scanner scanner = new Scanner(System.in)) {
            String text = scanner.nextLine();
            char[] arr = text.toCharArray();
            
            for(int x = arr.length - 1; x >= 0; x--){
            	System.out.print(arr[x]);
            }
            //your code goes here
        }
		
	}
}
