import java.util.Scanner;

class House_number{
    private
        String number;
        Scanner scan=new Scanner(System.in);
    public
        House_number()
        {
            System.out.println("Give your number of your house: ");
            this.number=scan.nextLine();
        }

        public String number()
        {
            return number;
        }
}
