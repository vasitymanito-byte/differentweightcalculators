import java.util.Scanner;

public class WeightConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double weight;
        String weightChoice;

        for (int i = 0; i < 5; i++) {

            System.out.print("Please enter your weight: ");
            weight = scanner.nextDouble();

            System.out.print("Is your weight in (L)bs or (K)gs: ");
            weightChoice = scanner.next();

            if (weightChoice.equalsIgnoreCase("L")) {
                weight = weight * 0.45359237;
                System.out.println("Your weight is: " + weight + " kg");
            }
            else if (weightChoice.equalsIgnoreCase("K")) {
                weight = weight * 2.20462262;
                System.out.println("Your weight is: " + weight + " lbs");
            }
            else {
                System.out.println("Your choice was not accepted");
            }
        }

        scanner.close();
    }
}
