/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Testing;

import java.util.ArrayList;
import java.util.Scanner;


public class Distinct_Primes {

    static ArrayList<Integer> lucky = new ArrayList();

    public static void criba(int n) {
        int[] candidatos = new int[n + 1];
        for (int j = 0; j < candidatos.length; j++) {
            candidatos[j] = 0;
        }
        for (int m = 2; m <= n; m++) {
            if (candidatos[m] == 0) {
                for (int k = m+m; k <= n; k += m) {
                    candidatos[k] += 1;
                }
            }
        }
        for (int m = 2; m <= n; m++) {
            if (candidatos[m] >= 3) {
                lucky.add(m);
            }
        }
    }

    public static void main(String[] Args) {
        criba(2700);
        try (Scanner in = new Scanner(System.in)) {
            int  i = 0, t = in.nextInt();
            while (i < t) {
                int c = in.nextInt();
                System.out.println(lucky.get(c - 1));
                i++;
            }
        }
    }
}
