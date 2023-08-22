// Problems on String
// Accept name from user and Display number of characters

import java.util.*;

class Program269
{
     public static void main(String Ar[])
     {
          Scanner sobj = new Scanner(System.in);
          
          System.out.println("Please enter your Full name :");
          String str = sobj.nextLine();

          System.out.println("Number of characters are : "+str.length());

          for(int i = 0 ; i < str.length(); i++)
          {
               System.out.println(str.charAt(i));
          }
     }
}