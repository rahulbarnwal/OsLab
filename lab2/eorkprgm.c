#include<stdio.h>

int eork()
{
 for(i=1;i<=10;i++)
 {
  
  p=fork();
  if(p==0)fork();
