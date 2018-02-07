#include<stdio.h>
#include<string.h>

main()
{
 char x[20]; int a[50][200],i,n,m,j;
 printf("Give numbe rof processes");
 scanf("%d",&n);
 for(i=1;i<=n;i++){ a[i][122]=i;a[i][118]=0; }

 do
 {
   scanf("%s",x);
   for(i=1;i<=n;i++)
   {
     if((x[1]=='=')&&(x[3]=='+')){printf("!!!");a[i][x[0]]=a[i][x[2]]+a[i][x[4]];}
     if((x[1]=='=')&&(x[2]<60)){printf("$$$$");a[i][x[0]]=x[2] -48;}
     if(x[1]=='r') { printf("%d\n",a[i][x[6]]);sleep(1); }
   }
   if(x[1]='o')
     {
       m=n;
       for(i=1;i<=m;i++)
       {
        n++;
        for(j=0;j<199;j++)a[n][j]=a[i][j];a[n][122]=n;
       }
     }
 }while(1);
} 
 
