import java.util.*;
public class remevalve {
    public static void main(String[] args){
        int ans;
        int num1;
        int num2;

        Scanner scan = new Scanner(System.in);
        System.out.println("What is the dividend?");
        num1 = scan.nextInt();
        System.out.println("What do you want to divide it by?");
        num2 = scan.nextInt();
        scan.close();

        ans = num1 % num2;
        System.out.println(ans);
    }
}
