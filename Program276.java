import java.util.*;

class MarvellousX
{
    public int CapitalCount(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();

        for(int i = 0; i < s.length(); i++)
       {
         if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
         {
            iCnt++;
         }
       }
      return iCnt;
    }
}
class Program276
{
    public static void main(String a[])
    {
       Scanner sobj = new Scanner(System.in);
 
       System.out.println("Enter String");
       String str = sobj.nextLine();

      MarvellousX obj = new MarvellousX();

      int iRet = obj.CapitalCount(str);
      System.out.println("number of capital  letters are :"+iRet);
    }
}