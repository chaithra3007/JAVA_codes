class Linear{

    public static void main(String[] args) {
        int[] arr={34,3,21,7,90};
        int x=7;
        System.out.println(ls(arr,x));
    
    }

    
    static int ls(int[] arr,int x)
    {
        if(arr.length==0)
           return -1;
        for(int i=0;i<arr.length;i++)   
        {
            if(x==arr[i])
              return i;
        }
        return -1;
    }

}