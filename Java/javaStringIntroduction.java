import java.util.Scanner;

public class javaStringIntroduction {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        System.out.println(A.length() + B.length());
        if (A.charAt(0) <= B.charAt(0)) System.out.println("No");
        else System.out.println("Yes");
        String capitalizeA = A.substring(0, 1).toUpperCase();
        String capitalizeB = B.substring(0, 1).toUpperCase();
        A = capitalizeA + A.substring(1);
        B = capitalizeB + B.substring(1);
        System.out.println(A + " " + B);
    }
}
