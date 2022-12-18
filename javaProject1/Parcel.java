import java.util.Scanner;

public class Parcel {
    private double weight;
    private String size;      //size is a char
    private boolean is_neddedSpecialAttention;
    Scanner scan=new Scanner(System.in);
    

    Parcel()
    {
        System.out.println("Give the weight of your package: ");
        this.weight=scan.nextDouble();
        while(is_weight_acceptable())
        {
            System.out.println("The weight of your package should not be greater than 100: ");
            this.weight=scan.nextDouble();
        }
        System.out.println("Give the size of your package:(A smaller than 8 X 38 X 64 cm | B smaller than 19 X 38 X 64 cm | C smaller than 41 X 38 X 64 cm): ");
        this.size=scan.nextLine();

    }
    
    private boolean is_weight_acceptable()
    {
        if(this.weight<100)
        {
           return false;
        }
        else
        {
            return true;
        }
    }

    public String delivery()
    {
        return (size +" | " +weight); 
    }
}
