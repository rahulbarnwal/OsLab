import java.io.*;
class g implements Runnable
{
 public void run()
 {
  int k; String s="";
  DataInputStream z;
  z=new DataInputStream(System.in);
  try
  { s=z.readLine();}
  catch(Exception e){};
  k=Integer.parseInt(s);
  System.out.println(k*2);
 }
}

class kapil
{ public static void main(String k[])
  {
    g x=new g();
    Thread t=new Thread(x);
    t.start();
    while(t.isAlive())
    {
     System.out.print("Input a number");
     try{ Thread.sleep(1000);}
     catch(Exception e){};
    }         
    //System.out.println("ram");
  }
}
