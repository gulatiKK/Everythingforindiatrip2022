import java.util.Scanner;
public class sumofdigits {
    public static void main(String[] args){
    int ans = 0;
    int num;
    int x;

    Scanner scan = new Scanner(System.in);
    System.out.println("What is the number?");
    num = scan.nextInt();
    scan.close();

    while(num > 0){
        x = num % 10;
        ans = ans + x;
        num = num / 10;
    }

    System.out.println(ans);
}
}