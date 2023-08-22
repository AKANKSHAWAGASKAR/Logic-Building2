// Problems on String
// Accept string from user and Count small character 

import java.util.*;

class Program274
{
    public static void main(String a[])
    {
       Scanner sobj = new Scanner(System.in);
 
       System.out.println("Enter String");
       String str = sobj.nextLine();

      char Arr[] = str.toCharArray();

      System.out.println("Data is :"+Arr);
    }
}