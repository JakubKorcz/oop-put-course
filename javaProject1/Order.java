public class Order {
    Address address;
    Parcel parcel;
    
    public 
    Order()
    {
        System.out.println("---------Adding new order--------");
        Address address=new Address();
        this.address=address;
        Parcel parcel=new Parcel(); 
        this.parcel=parcel; 
    }

    private String abode()
    {
        return address.giveAddress();
    }

    private String deliveryDetail()
    {
        return parcel.delivery();
    }

    public String allDetails()
    {
        return abode()+"  "+deliveryDetail();
    }
    
}
