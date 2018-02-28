import java.io.*;
import java.util.Scanner;
class g implements Runnable
{
  public void run()
  {
   do
   {
     
   }while(1)   
  }
}

class kapil
{
 public static void main(String k[])
 {
  g x =new g();
  Thread t=new Thread(x);
  t.start();
  while(t.isalive()){}
  System.out.println("ram");  
 }
} 
 
