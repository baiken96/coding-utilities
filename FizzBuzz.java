import java.util.Scanner;

class FizzBuzz {
    public static void main(String args[] ) throws Exception {
        /* Sample code to perform I/O:
         * Use either of these methods for input

        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String name = br.readLine();                // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT

        //Scanner
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();                 // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT

        */

        // Write your code here

        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();

        String c = s.nextLine();
        String[] cases = c.split(" ");

        for (int test=0;test<t;test++)
        {

            int n = Integer.parseInt(cases[test]);

            for (int i=1;i<=n;i++)
            {

                if (i%3==0 && i%5==0)
                    System.out.println("FizzBuzz");
                else if (i%3==0)
                    System.out.println("Fizz");
                else if (i%5==0)
                    System.out.println("Buzz");
                else
                    System.out.println(i);

            }

        }

    }
}
