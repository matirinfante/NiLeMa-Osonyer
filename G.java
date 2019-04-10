package ICPC16;

import java.util.ArrayList;
import java.util.Scanner;

public class G {

    static String cad;
    static int[] array = new int[26], patron, verif, array3 = new int[26];
    static int j;
    static ArrayList<Integer> noVisit = new ArrayList();

    //verifica a que distancia esta el indice del patron i de su proxima aparicion, 0 si no hay otra aparicion del mismo
    // array: guarda las apariciones de los patrones, patron guarda las entradas del patron, verif guarda las distancias entre una aparicion y otra del mismo patron
    public static void distancias() {
        boolean flag = true;
        int i = 0;
        int z = 0;
        while (i < patron.length) {
            int k = patron[i];

            if (array[k] > 1) {
                j = i + 1;
                while (j < patron.length && flag) {

                    if (k == patron[j]) {
                        verif[i] = j - i;

                        flag = false;
                    }

                    j++;

                }

            } else if (array[k] == 1) {
                verif[i] = 0;
                noVisit.add(i);
                z++;
            }

            flag = true;
            i++;
            j = 0;
        }

    }
//verifica que cumpla con algunos rangos del patron provisto para pasar a una segunda revision

    public static boolean verificar(String cad) {
        int i = 0;
        boolean flag = true;
        int cont = 0;
        array3 = new int[26];
        while (i < verif.length && flag) {

            int j = verif[i];
            if (((i + j) < cad.length()) && (cad.charAt(i) != cad.charAt(i + j))) {
                flag = false;
            } else {
                int k = (int) cad.charAt(i) - 97;
              //  System.out.println("sesuma "+ cad.charAt(i));
                array3[k] += 1;
                i++;
            }
        }

        return flag;
    }
//DEBUGGEAR
    public static boolean verifCeros() {
        boolean flag = true;
        int i = 0;
      //  int[] array2 = new int[26];
        int j = noVisit.get(i);

        while (flag && i < noVisit.size()) {
            j = noVisit.get(i);
            int aux = (int) cad.charAt(j) - 97;
            array3[aux] += 1;

            if (array3[aux] > 1) {
                flag = false;

            }

            i++;
        }

        return flag;
    }

    public static void main(String[] Args) {

        Scanner in = new Scanner(System.in);
        cad = in.nextLine();
        int n = in.nextInt();
        int i = 0;

        patron = new int[n];
        int aux = 0;
        verif = new int[n];

        while (i < n) {
            int s = in.nextInt();
            patron[i] = s;
            array[s] += 1;
            i++;
        }
        distancias();
        int cont = 0;

        for (int j = 0; j < cad.length() - patron.length + 1; j++) {

            String cade = cad.substring(j, j + patron.length);
            System.out.println(cade);

            if (verificar(cade)) {
                if (noVisit.isEmpty()) {
                    cont++;
                } 
                // ESTO HAY QUE ARREGLAR ( ESE MODULO ENTERO)
                /* else {
                    if (verifCeros()) {
                        cont++;
                    } 
                } */
            }

        }
        int p = 0;

        System.out.println("");
        System.out.println("rta " + cont);
        while (p < array3.length) {
       //    System.out.println(array3[p]);
            p++;
        }

    }

}