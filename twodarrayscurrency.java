import java.util.*;
public class twodarrayscurrency {
    public static void main(String[] args){
        int userChoice;
        double amt;
        int userChoiceone;
        
        Scanner scan = new Scanner(System.in);
        System.out.println("What is the Currency?");
        System.out.println("Press 1 for AUD");
        System.out.println("Press 2 for USD");
        System.out.println("Press 3 for Japenese YEN");
        System.out.println("Press 4 for CAD");
        System.out.println("Press 5 for EUR");
        System.out.println("Press 6 for INR");
        userChoice = scan.nextInt();
        System.out.println("How much is there?");
        amt = scan.nextDouble();
        System.out.println("What do you want to convert it to?");
        System.out.println("Press 1 for AUD");
        System.out.println("Press 2 for USD");
        System.out.println("Press 3 for Japenese YEN");
        System.out.println("Press 4 for CAD");
        System.out.println("Press 5 for EUR");
        System.out.println("Press 6 for INR");
        userChoiceone = scan.nextInt();
        scan.close();

        double[][] arr = {
            {Math.round(amt*0.67*100.0) / 100.0, Math.round(amt*0.09*100.0) / 100.0, Math.round(amt*0.09*100.0) / 100.0, Math.round(amt*55.49*100.0) / 100.0, Math.round(amt*100.0*0.63) / 100.0, Math.round(amt*1*100.0) / 100.0},
            {Math.round(amt*100.0*1.49) / 100.0, Math.round(amt*100.0*1.4) / 100.0, Math.round(amt*100.0*135.77) / 100.0, Math.round(amt*100.0*82.62) / 100.0, Math.round(amt*100.0*0.95) / 100.0, Math.round(amt*1*100.0) / 100.0},
            {Math.round(amt*100.0*0.01) / 100.0, Math.round(amt*100.0*0.007) / 100.0, Math.round(amt*100.0*0.01) / 100.0, Math.round(amt*100.0*0.61) / 100.0, Math.round(amt*100.0*0.0069) / 100.0, Math.round(amt*1*100.0) / 100.0},
            {Math.round(amt*100.0*1.09) / 100.0, Math.round(amt*100.0*0.73) / 100.0, Math.round(amt*100.0*99.5) / 100.0, Math.round(amt*100.0*60.52) / 100.0, Math.round(amt*100.0*0.7) / 100.0, Math.round(amt*1*100.0) / 100.0},
            {Math.round(amt*100.0*1.58) / 100.0, Math.round(amt*100.0*1.05) / 100.0, Math.round(amt*100.0*1.45) / 100.0, Math.round(amt*100.0*144.45) / 100.0, Math.round(amt*100.0*87.80) / 100.0, Math.round(amt*1*100.0) / 100.0},
            {Math.round(amt*100.0*0.018) / 100.0, Math.round(amt*100.0*0.012) / 100.0, Math.round(amt*100.0*0.017) / 100.0, Math.round(amt*100.0*1.65) / 100.0, Math.round(amt*100.0*0.01) / 100.0, Math.round(amt*1*100.0) / 100.0}

        };

        System.out.println(arr[userChoice-1][userChoiceone-1]);        
    }
}

