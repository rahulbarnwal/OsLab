import java.io.*;
class g implements Runnable
{
 public void run()
 {
  int k; String s="";
  DataInputStream z;
  z=new DataInputStream(System.in);
  do{
  try
  { s=z.readLine();}
  catch(Exception e){};
  k=Integer.parseInt(s);
  }while(k%2!=0);
  
}
}

class kapil
{ public static void main(String k[])
  {
    g x=new g();
    Thread t=new Thread(x);
    t.start();
    int i=0;
    while(t.isAlive())
    {
     System.out.print((++i)+",");
     try{ Thread.sleep(1000);}
     catch(Exception e){};
    }         
    //System.out.println("ram");
  }
}
