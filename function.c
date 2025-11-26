#include<stdio.h>
int add(int n);
int main(){
int n;
printf("enter a number");
scanf("%d",&n);
if(add(n))
printf("%d even \n",n);
else
printf("%d odd\n",n);
}
int add(int n){
if(n%2==0)
return 1;
else
return 0;
}

