import java.io.*;
import java.util.Scanner;
class g implements Runnable
{
  public void run()
  {
   String s;
   DataInputStream z;
   z=new DataInputStream(System.in);
   try
   {
    s=z.readLine();
   }
   catch(Exception e){};
  } 
}

class kapil
{
 public static void main(String k[])
 {
  Scanner scanner = new Scanner(System.in);
  String input=scanner.nextLine();
   
  int i=0;
  g x=new g();
  Thread t=new Thread(x);
  t.start();
  while(t.isAlive())
  {
   try
   { Thread.sleep(1000);
     //i++;
   }
   catch(Exception e){};
  }
   System.out.print("The number of times output checkingis done="+i);
 
 }
} 
 
