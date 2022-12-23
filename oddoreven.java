import java.util.*;
public class oddoreven {
    public static void main(String[] args){
        int input;

        Scanner scan = new Scanner(System.in);
        System.out.println("What is the number?");
        input = scan.nextInt();
        scan.close();

        if(input % 2 == 0){
            System.out.println(input + " is an even number");
        }

        else{
            System.out.println(input + " is an odd number");
        }
    }
}
