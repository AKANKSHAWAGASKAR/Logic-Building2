// Problems on String
// Accept name from user and Display number of characters

import java.util.*;

class Program268
{
     public static void main(String Ar[])
     {
          Scanner sobj = new Scanner(System.in);
          
          System.out.println("Please enter your Full name :");
          String str = sobj.nextLine();

          System.out.println("Number of characters are : "+str.length());
     }
}