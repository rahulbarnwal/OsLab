#include<stdio.h>
#include<string.h>
main()
{
 int i;
 char x[20]; int a[200]; 
 do
 {
   scanf("%s",x);
   if((x[1]=='=')&&(x[3]=='+')){printf("!!!");a[x[0]]=a[x[2]]+a[x[4]];}
   if((x[1]=='=')&&(x[2]<60)){printf("$$$$");a[x[0]]=x[2] -48;}
   if((x[1]=='=')&&(x[2]>96 && x[2]<123)&&(x[3]!='+')){printf("@@@");a[x[0]]=a[x[2]];}//copy u=k
   if(x[1]=='r') { printf("%d\n",a[x[6]]);sleep(1); }
   if((x[4]=='>')&&(x[0]=='i')){ printf("***");if(a[x[3]]>a[x[5]])a[x[5]]=a[x[9]];}
   if((x[0]>96)&&(x[0]<123)&&(x[1]=='=')&&(x[2]=='[')) 
   {
     printf("DDDD");
     if(x[3]>96&&x[3]<=122)a[x[0]]=a['a'+a[x[3]]-1];
     else
       {
        a[x[0]]=a['a'+(int)(x[3])-48-1];//when x[3] is nummeric
       }
   }  
   if((x[0]=='[')&&(x[3]=='='))
   { printf("HHH");
     if(x[1]>96&&x[1]<123){ printf("AA");a['a'+a[x[1]]-1]=x[4]-48;}
     else 
      {
        printf("BB");a[(int)(x[1])-49 +'a']=x[4]-48;
      }
   }
// printf("%d ",a[x[0]]);
 } while(1);
}



