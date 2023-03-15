import java.util.*;
public class Mat{
public static void main(String[] args) {

       Scanner sc = new Scanner(System.in);
       System.out.println("enter size");
       int m = sc.nextInt();
       int n =sc.nextInt();
       System.out.println("enter size");
       int p= sc.nextInt();
       int q=sc.nextInt();
       if(n!=p)
       {
           System.out.println("matrix mul not poss");
           System.exit(0);
       }
       int a[][]=new int[m][n];
       int b[][]= new int[p][q];
       int c[][]= new int[m][q];
     System.out.println("enetr matrix");
     for (int i = 0; i < m; i++) {
         for(int j=0;j<n;j++)
           a[i][j]=sc.nextInt();
     }
     for (int i = 0; i < p; i++) {
        for(int j=0;j<q;j++)
          b[i][j]=sc.nextInt();
    }
    sc.close();
    System.out.println("the resultant matrix is");
    for (int i = 0; i < m; i++) {
        for(int j=0;j<q;j++)
          {
              c[i][j]=0;
              for(int k=0;k<p;k++)
                c[i][j]=a[i][k]*b[k][j]+c[i][j];
            System.out.print(c[i][j]+"  ");
          }
          System.out.println();
    }
}
}