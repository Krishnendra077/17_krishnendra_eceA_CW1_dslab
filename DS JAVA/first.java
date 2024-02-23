import java.util.Scanner;
public class first {
    int searching(int[] array) {

        for (int i = 0; i < array.length; i++)

        {

            if (array[i] == 4)
                return i;

        }

        return -1;
    }

    void inserting(int[] array, int[] newarray) {
        for (int i = 0; i < 2; i++) {
            newarray[i] = array[i];
        }
        newarray[2] = 90;

        for (int i = 3; i < newarray.length; i++) {
            newarray[i] = array[i - 1];
        }
        for (int i = 0; i < newarray.length; i++) {
            System.out.println(newarray[i]);
        }

    }

    void deleting(int[] array) {

        System.out.println("deleting of an element from the array");
        for (int i = 2; i < array.length - 1; i++) {
            array[i] = array[i + 1];
        }
        for (int i = 0; i < array.length - 1; i++) {
            System.out.println(array[i]);
        }

    }

    void reversing(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.println("the reverse of the string is \n");
            int temp;
            for (i = 0; i < array.length / 2; i++) {
                temp = array[i];
                array[i] = array[array.length - i - 1];
                array[array.length - i - 1] = temp;
            }
            for (i = 0; i < array.length; i++) {
                System.out.println(array[i]);
            }
        }

    }

    void updating(int[] array) {
        System.out.println("updating of the string\n");

        for (int i = 0; i < array.length; i++) {
            if (array[i] % 2 == 0) {
                array[i] = array[i] * 2;
            } else
                array[i] = array[i] + 5;
        }
        System.out.println("after updating the array\n");

        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
    }

    public static void main(String[] args) {
        Scanner name = new Scanner(System.in);

        System.out.println("enter the size of the arrays");
        int size = name.nextInt();
        int array[] = new int[10];
        first obj = new first();
        System.out.println("enter the elements of the arrays");
        for (int i = 0; i < size; i++) {
            array[i] = name.nextInt();

        }
        System.out.println("these are the elemnts of the array");
        for (int i = 0; i < size; i++) {

            System.out.println("" + array[i]);

        }

        while (true) {
            System.out.println("enter the value of n ");
            System.out.println("enter the value of 1 for the searching of the array ");
            System.out.println("enter the value of 2 for the inseting of an element ");
            System.out.println("enter the value of 3 for deleting of an element at the specific place");
            System.out.println("enter the value of 4 for reversig the array ");
            System.out.println("enter the value of 5 for updating the array ");
            System.out.println("this the value of n ");
            int n = name.nextInt();
            switch (n) {
                case 1:
                    int c = array.length;
                    System.out.println("this is the length of the array " + c);
                    // System.out.println("this is the length of the arrays " + array.length);

                    int index = obj.searching(array);
                    if (index != -1) {
                        System.out.println("number is found at index" + index);
                    } else {
                        System.out.println("number is not found ");
                    }
                    break;
                case 2:
                    int newarray[] = new int[11];
                    obj.inserting(array, newarray);

                    break;
                case 3:

                    obj.deleting(array);

                    break;
                case 4:

                    obj.reversing(array);

                    break;
                case 5:
                    obj.updating(array);

                default:
                    System.out.println("you wrote something wrong");
                    break;
            }
            name.close();
        }

    }

}
