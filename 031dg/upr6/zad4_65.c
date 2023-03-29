#include <stdio.h>
#include <stdlib.h>
int main()
{
 int arr[20];
 int num;
 int i;
 int sum=0;
 int br=0;
 for(i=0;i<20;i++)
 {
 scanf("%d",&num);
 arr[i]=num;
 }
 for(i=0;i<20;i++)
 {
  if(arr[i]>0)
  {
   sum+=arr[i];
   br+=1;
  }
 } 
 printf("%d...%d",sum,br);
 system("pause");
}
