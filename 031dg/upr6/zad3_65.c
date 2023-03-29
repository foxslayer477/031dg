#include <stdio.h>
#include <stdlib.h>
int main()
{
 int arr[15];
 int num;
 int i;
 for(i=0;i<15;i++)
 {
  scanf("%d",&num);
  arr[i]=num;                
 }
 for(i=14;i>=0;i--)
 {
  printf("  %d  ",arr[i]);
 }
 system("pause");   
}
