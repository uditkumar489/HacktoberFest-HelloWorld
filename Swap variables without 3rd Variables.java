public class SwapTwoNumberWithoutThirdVariable
{
   public static void main(String args[])
   {
      int x, y;
      
      x = 5;
      y = 7;
      System.out.println("Before Swapping\nx = "+x+"\ny = "+y);
      x = x + y;
      y = x - y;
      x = x - y;
      System.out.println("After Swapping without third variable\nx = "+x+"\ny = "+y);
  }
}
