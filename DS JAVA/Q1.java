import java.util.Scanner;

public class Q1 {

    public static void main(String[] args) {
        Scanner name = new Scanner(System.in);
        System.out.println("enter the numbrer of elements in the array");
        int size = name.nextInt();
        int[] array = new int[size];
        System.out.println("enter the elements of the array");
        for (int i = 0; i < size; i++) {

            array[i] = name.nextInt();

        }
        name.close();
        System.out.println("these are the elemnts of the array");
        for (int i = 0; i <= size; i++) {
            System.out.println("elemnt at this index " + i + ":" + array[i]);

        }

    }
}
