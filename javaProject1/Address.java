import java.util.Scanner;

public class Address {
    private
        String region;
        String locality;
        String street;
        Scanner scan =new Scanner(System.in);
        House_number house_number;
    public
         Address()
        {
            System.out.println("Give your region: ");
            this.region=scan.nextLine();
            System.out.println("Give your city: ");
            this.locality=scan.nextLine();
            System.out.println("Give your street: ");
            this.street=scan.nextLine();
            House_number house_number=new House_number();
            this.house_number=house_number;
        }

        public String giveAddress()
        {       
            return (region+ "|" + locality + "|" + street + "|" + house_number.number()) ;
        }
}
