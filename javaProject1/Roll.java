import java.util.ArrayList;


public class Roll implements RollInt{
    
    ArrayList<Order>list=new ArrayList<>();
   
    @Override
    public void add_order(){ 
        Order order=new Order();
        list.add(order);
        }  

    @Override
    public void remove_order(int a){
        list.remove(a-1);
    }

    @Override
    public void show_orders()
    {
        for(int a=1;a<=sizeOfList();a++){
            show_order(a);
        }
    }

    @Override
    public void show_order(int a)
    {
        System.out.println(list.get(a-1).allDetails());
    }

    private int sizeOfList(){
        return list.size();
        }
}
