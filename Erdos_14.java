import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Erdos_14 {

    static Queue cola;
    static ArrayList<Integer>[] ady;
    static int M = 0, S = 1, CANT = 0;
    static int[] visitados;

    public static void bfs() {
        int actual;
        cola = new LinkedList();
        cola.offer(1);
        visitados[1] = 0;
        while (!cola.isEmpty()) {
            actual = (int) cola.poll();

            CANT++;

            for (Integer adyacente : ady[actual]) {
                int nuevaDist = visitados[actual] + 1;

                if (visitados[adyacente] == -1 && !cola.contains(adyacente)) {
                    cola.offer(adyacente);
                    visitados[adyacente] = nuevaDist;
                    M = nuevaDist;
                }
            }
        }
        for (int i = 1; i < visitados.length - 1; i++) {
            S += visitados[i];
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int a = in.nextInt(), n = in.nextInt();
        ady = new ArrayList[n + 1];
        for (int i = 0; i < n + 1; i++) {
            ady[i] = new ArrayList();
        }
        visitados = new int[n + 1];
        for (int i = 0; i < n + 1; i++) {
            visitados[i] = -1;
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
        System.out.println(CANT + " "+ M + " "+ S);
    }

}
