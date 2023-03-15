import java.util.*;
class Customer{
   int id;
   String dob;
   String name;
   double salary;
   String email;
   int age;
   Customer(int a,String b,String c,double d,String e,int f){
       id=a;
       dob=b;
       name=c;
       salary=d;
       email=e;
       age=f; 
   }

}


class NoAgeFoundException extends Exception{
    private int detail;
    NoAgeFoundException(int a){
        detail=a;
    }
    public String toString(){
        return "no employee found with this age value"+detail+"";
    }
}


public class Cust {
    static ArrayList<Customer> cus = new ArrayList<Customer>();
        static void SearchCustomerbyAge(int a) throws NoAgeFoundException {
         int s=0;
            for (int i = 0; i < cus.size(); i++) {
              if(a==cus.get(i).age)  
               {  s=1;
                 break;
            }
        }
        if(s==0)
        throw new NoAgeFoundException(a);
        }
public static void main(String[] args)  {
    Customer c1=new Customer(1212,"121212","sjad",1234.6,"hgfuauyhsd@",23);
    System.out.println(c1.name);
    cus.add(c1);
    try{
    SearchCustomerbyAge(239);
    }
    catch(NoAgeFoundException e){
        System.out.println(e);
    }
}
}