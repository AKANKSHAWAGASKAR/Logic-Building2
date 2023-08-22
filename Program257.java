// Problems on Numbers and also Digit
// Accept one number from user and dsiplay its Number is Amstrong or not 
// EX :  153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

import java.util.*;

class Digits
{
     private int CountDigits(int iNo)
     {
          int iCnt = 0;
          while(iNo != 0)
          {
               iCnt++;
               iNo = iNo /10;
          }
          return iCnt;
     }

     private int Power(int Base, int Index)    // Base = 4  index = 5
     {
          int iAns = 1;

          for(int iCnt =1; iCnt <= Index ; iCnt++)
          {
               iAns = iAns * Base;
          }
          return iAns ;
     }

     public boolean CheckArmstrong(int iNo)
     {
          int iTemp = iNo;
          int iSum = 0;
          int iDigit = 0;
          int iRet = 0;

          int iCount = CountDigits(iNo);

          while(iNo != 0)
          {
               iDigit = iNo % 10;

               iRet = Power(iDigit , iCount);
               iSum = iSum + iRet;

               iNo = iNo/ 10;
          }

          if(iSum == iTemp)
          {
               return true;
          }
          else
          {
               return false;
          }
     }
}

class Program256
{
     public static void main(String A[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println("Please enter number :");
          int iNo = sobj.nextInt();

          Digits dobj = new Digits();

          boolean bRet = dobj.CheckArmstrong(iNo);

          if(bRet == true)
          {
               System.out.println(iNo+ " is a Amstrong numbers.");
          }
          else
          {
               System.out.println(iNo+ " is a not Amstrong numbers.");
          }

     }
}