package com.fadhelhayat.hackerrank;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class JavaList {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        List<Integer> Q = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            Q.add(in.nextInt());
        }

        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            String str = in.next();
            if (str.equals("Insert")) {
                int x = in.nextInt();
                int y = in.nextInt();
                Q.add(x,y);
            }
            if (str.equals("Delete")) {
                int x = in.nextInt();
                Q.remove(x);
            }
        }

        for (int i = 0; i < Q.size(); i++) {
            System.out.print(Q.get(i) + " ");
        }

    }
}
