#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2){
  printf("enter the first numerartor and denominator of fraction\n");
  scanf("%d%d",num1,den1);
  printf("enter the second numerartor and denominator of fraction\n");
  scanf("%d%d",num2,den2);
  
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3){
 
* num3=(den2*num1)+(den1*num2) ;
  *den3=den1*den2;
  for(int i=0;i<=num3 && i<=den3;++i){
    if(num3%i==0 && den3%i==0)
      return i;
  }
  
  }
void output(int num1, int den1, int num2, int den2, int num3, int den3){
  
  printf("the sum of %d/%d and %d/%d is %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main(){
int p1,q1,p2,q2,p3,q3;
  input(&p1,&q1,&p2,&q2);
  add(p1,q1,p2,q2,&p3,&q3);
  output(p1,q1,p2,q2,p3,q3);
  return 0;
}

