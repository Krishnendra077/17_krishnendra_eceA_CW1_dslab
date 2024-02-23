import java.util.Scanner;

class fun {
    void binarysearch(int [] array, int m) {
        int l = 0;
        int r = array.length - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (array[mid] == m) {
                System.out.println("this is the index number" + mid);
                return;
            }
            if (array[mid] > m) {

                r = mid - 1;
            } else {
                l = mid + 1;
            }

        }
System.out.println("nothing is found");
    }

}

public class binarysearchA {

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
        name.close();
        int m = 43;
        obj.binarysearch(array, m);
    }

}