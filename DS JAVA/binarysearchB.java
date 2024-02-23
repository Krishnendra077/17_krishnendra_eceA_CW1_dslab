import java.util.Scanner;

class fun {
    void binarysearch(int[] array, int m, int length, int z) {

        if (z <= length)

        {
            int mid = z + (length - z) / 2;

            if (array[mid] == m) {
                System.out.println("this is the index number" + mid);
                return;
            }
            if (array[mid] > m) {

                binarysearch(array, m, mid - 1, z);

            } else {

                binarysearch(array, m, length, mid + 1);

            }

        } else {
            System.out.println("nothing is found");
        }
    }

}

public class binarysearchB {

    public static void main(String[] args) {
        Scanner name = new Scanner(System.in);
        System.out.println("enter the size of the array");
        int size = name.nextInt();
        int array[] = new int[size];
        fun obj = new fun();
        System.out.println("enter the values of the elements");
        for (int i = 0; i < size; i++) {
            array[i] = name.nextInt();

        }
        System.out.println("these are the arrays");
        for (int i = 0; i < size; i++) {
            System.out.println(array[i]);

        }
        int n = array.length;
        int m = 43;
        obj.binarysearch(array, m, n - 1, 0);
        name.close();
    }

}