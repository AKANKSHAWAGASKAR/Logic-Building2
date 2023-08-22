import java.util.*;

class Program492
{
    public static void main(String Arg[])
    {
        LinkedList<Integer> obj = new LinkedList();

        obj.add(11);
        obj.add(21);
        obj.add(51);

        obj.remove(0);

        System.out.println("data is :"+obj);

        for(int no : obj)
        {
            System.out.println(no);
        }
    }
}