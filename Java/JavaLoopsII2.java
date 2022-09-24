package com.fadhelhayat.hackerrank;
import java.lang.Math;
import java.util.Scanner;

public class JavaLoopsII2 {
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);

        int t=in.nextInt();
        int[][] arr = new int[t][3];
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            arr[i][0] = a;
            arr[i][1] = b;
            arr[i][2] = n;
        }

        for (int i = 0; i < t; i++) {
            int s;
            s = arr[i][0];
            for (int j = 0; j < arr[i][2]; j++) {
                s = s + (int) Math.pow(2, j) * arr[i][1];
                System.out.print(s + " ");
            }
            System.out.println();
        }
        in.close();
    }
}
