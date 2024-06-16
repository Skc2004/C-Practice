#include <stdio.h>
#include<math.h>
int main()
{
  printf("\033[0;0H\033[2J");
  int n,dup,c=0,a,i,sum=0,pp,dup2;int x;
  printf("Enter a number");
  scanf("%d",&n);
  dup=n;
  dup2=n;
  //counting no of digits here
while(dup!=0){
  dup=dup/10;
  c++;
}
  printf("%d \n",c);
  //armstrong logicc..
while(dup2>0)
  {
    x=dup2%10;
    //calculating power here
    //pp=pow(x,c);
    sum=sum+pow(x,c);
    dup2=dup2/10;
  }
printf("%d \n",sum);
}