import java.io.*;
import java.util.Scanner;
class g implements Runnable
{ int k;
  public void run()
  { int i;
    for(i=1;i<=k;i++)
    { System.out.println(i);
      try{Thread.sleep(1000);}
      catch(Exception e){};
    }
  }
}

class kapil
{
 public static void main(String k[]) throws Exception
  { g x=new g(); Thread t=new Thread(x);
    g y=new g(); Thread u=new Thread(y);
    x.k=15; t.start();
    String s; 
    Scanner scanner=new Scanner(System.in);
    s=scanner.nextLine();
    y.k=Integer.parseInt(s);
    u.start(); t.join();
    System.out.println("mohan");
  }
}
