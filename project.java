import java.util.Scanner;
public class project {
    public static void main(String[] args) {
        System.out.println("hello bros visiting the application");
        System.out.println("lets try your luck try to guess a number between 1 to 100");
        int numcorr = ((int) (Math. random() * 100));
        System.out.println("Enter number");
        Scanner sc = new Scanner(System.in);
        int gnum;
        int i = 5;
        while (i != 0) {
             gnum = sc.nextInt();
            if (gnum == numcorr) {
                System.out.println("Bingo you got it correct");
                break;
            } else {
                if (gnum > numcorr) {
                    System.out.println("Your thinking is too high for this problem");
                    System.out.print(i-1);
                    System.out.println(" chances left");
                } else {
                    System.out.println("You need to be the real big you");
                    System.out.print(i-1);
                    System.out.println(" chances left");
                }
            }
            i--;
        }
        if(i==0 )
        {
            System.out.print("The correct number was "); System.out.println(numcorr);
        }
        sc.close();
    }
}
