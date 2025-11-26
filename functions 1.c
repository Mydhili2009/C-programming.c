#include<stdio.h>
int sum(int n);
int main(){
int n,result;
printf("enter the value of n");
scanf("%d",&n);
result=sum(n);
printf("sum of numbers from 1to %d  is:%d\n",n,result);
return 0;
}
int sum(int n){
int sum=0;
for(int i=1;i<=n;i++){
sum+=i;
}
return sum;
}