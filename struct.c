#include<stdio.h>
struct theater{
char theatername[20];
char moviename[10];
int noofseating;
float ticketprice;
};
int main(){
struct theater t1={"santhi","mad",50,150.50};
printf("The name of the theater  is :%s\n",t1.theatername);
printf("The name of the movie  is :%s\n",t1.moviename);
printf("The number of alloted seats  are :%d\n",t1.noofseating);
printf("The price of the ticket  is :%f\n",t1.ticketprice);
return 0;
}

