import java.util.*;
public class exception{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		try{
		
		int n=s.nextInt();
        int avg = 1234/n;
		System.out.println("Hello World"+avg);
	}
	    catch(Exception e){
	        System.out.println("hello");
	    }
        s.close();
	}
}