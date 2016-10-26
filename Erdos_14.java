package Testing;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Erdos_14 {

    static Queue cola;
    static ArrayList<Integer>[] ady;
    static int M = 0, S = 0, CANT = 0;
    static boolean[] visitados;

    public static void bfs() {
        int actual;
        boolean flag = false;
        cola = new LinkedList();
        cola.offer(1);

        while (!cola.isEmpty()) {
            actual = (int) cola.poll();
            visitados[actual] = true;
            CANT++;

            for (Integer adyacente : ady[actual]) {
                if (!visitados[adyacente] && !cola.contains(adyacente)) {
                    cola.offer(adyacente);
                    flag = true;
                    S += M + 1;

                }
            }

            if (flag) {
                M++;
                flag = false;
            }

        }

    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int a = in.nextInt(), n = in.nextInt();
        ady = new ArrayList[n + 1];
        for (int i = 0; i < n + 1; i++) {
            ady[i] = new ArrayList();
        }
        visitados = new boolean[n + 1];
        for (int i = 0; i < n + 1; i++) {
            visitados[i] = false;
        }
        for (int k = 0; k < a; k++) {
            int autoresArt = in.nextInt();
            int[] arr = new int[autoresArt];
            for (int i = 0; i < autoresArt; i++) {
                arr[i] = in.nextInt();
            }
            for (int i : arr) {
                for (int j = 0; j < arr.length; j++) {
                    int actual = arr[j];
                    if (i != actual) {
                        ady[i].add(actual);
                    }
                }
            }
        }
        bfs();
        System.out.println("CANTIDAD: " + CANT + " NUM MAX: " + M + " SUMA: " + S);
    }

}

