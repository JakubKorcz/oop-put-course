import java.util.ArrayList;

public class Order implements OrderInt {
    Address address;
    Parcel parcel;
    ArrayList<Parcel>list=new ArrayList<>();

    public 
    Order()
    {
        System.out.println("---------Adding new order--------");
        Address address=new Address();
        this.address=address;
        Parcel parcel=new Parcel(); 
        this.parcel=parcel; 
        list.add(parcel);
    }

    private String abode()
    {
        return address.giveAddress();
    }

    private String deliveryDetail()
    {
        return parcel.delivery();
    }

    @Override
    public String allDetails()
    {
        return abode()+"  "+deliveryDetail();
    }

    @Override
    public void addParcel()
    {
        Parcel parcel=new Parcel(); 
        this.parcel=parcel; 
        list.add(parcel);
    }

    @Override
    public void removeParcel(int a)
    {
        list.remove(a-1);
    }

    @Override
    public int amountofParcels()
    {
        return list.size();
    }
}
