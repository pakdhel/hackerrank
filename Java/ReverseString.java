package com.fadhelhayat.hackerrank;

import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String A = sc.next();
        /* Enter your code here. Print output to STDOUT. */
        String str = "";

        int i = 0, j = A.length() - 1;
        while (i <= j) {
            if (A.charAt(i) != A.charAt(j)) {
                str = "No";
                break;
            } else {
                str = "Yes";
            }
            i++; j--;
        }
        System.out.println(str);
    }
}
