import java.io.*;
import java.util.Scanner;
class g implements Runnable
{
  public void run()
  { 
   
   try{Thread.sleep(10000);}
   catch(Exception e){};
  }
}

class kapil
{
 public static void main(String k[])
 {
  g x =new g();
  Scanner scanner=new Scanner(System.in);
  Thread t=new Thread(x);
  t.start();
  int i=0;
  int z;
  while(t.isAlive())
  {
    z=scanner.nextInt();
    System.out.print("("+2*z+") ");
  }

  while(true)
  {   	
   z=scanner.nextInt();
   System.out.print("("+3*z+") ");
  }
 }   
}
 
 
