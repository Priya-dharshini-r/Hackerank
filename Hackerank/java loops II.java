//Printing arithmatic series using java

import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int s=a;
            for(int j=0;j<=n-1;j++)
            {
               s=(int)Math.pow(2,j)*b+s;
               System.out.printf(s+" ");
            }
            System.out.println();
        }
    
        in.close();
    }
}
