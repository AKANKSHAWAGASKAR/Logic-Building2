// Problems on String
// Accept string from user and Count small character 

import java.util.*;

class MarvellousX
{
    public int DigitsCount(String s)
    {
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++)
       {
         if((s.charAt(i) >= '0') && (s.charAt(i) <= '9'))
         {
            iCnt++;
         }
       }
      return iCnt;
    }
}
class Program273
{
    public static void main(String a[])
    {
       Scanner sobj = new Scanner(System.in);
 
       System.out.println("enter String");
       String str = sobj.nextLine();

      MarvellousX obj = new MarvellousX();

      int iRet = obj.DigitsCount(str);
      System.out.println("number of small cae letters are :"+iRet);
    }
}