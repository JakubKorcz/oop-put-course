public class App {
    public static void main(String[] args) throws Exception 
    {           
                
                Roll roll=new Roll();
                roll.add_order();
                roll.add_order();
                roll.show_orders();
                roll.remove_order(1);
                roll.show_order(1);
                

    }
}
