class Table { 
    void printTable(int n)
   { 
    System.out.println("*****Hello -not synched"); 
   //synchronized block
    synchronized(this) {
    for(int i=1;i<=10;i++) { 
    System.out.println(n*i); 
    try{ 
    Thread.sleep(1000); 
    }
   catch(InterruptedException e) {
   System.out.println(e);
   } 
    } 
    
    } //end of sync block
    
   System.out.println("Hello -not synched");
   } //end of the method 
    } 
    class MyThread1 extends Thread{ 
   Table t; 
   MyThread1(Table t){ 
   this.t=t; 
   } 
   public void run() { 
   t.printTable(5); 
   } 
   } 
   class MyThread2 extends Thread
   { 
   Table t; 
   MyThread2(Table t){ 
   this.t=t; 
   } 
   public void run() { 
   t.printTable(100); 
   } 
   } 
    
   public class sta { 
   public static void main(String args[]) { 
   Table obj = new Table(); 
   MyThread1 t1=new MyThread1(obj); 
   MyThread2 t2=new MyThread2(obj); 
   t1.start(); 
   t2.start(); 
   } 
   }