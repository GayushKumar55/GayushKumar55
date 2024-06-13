#include<stdio.h>
int main()
{
   float p,r,t,si;
   printf("Enter the amount which was borrowed:");
   scanf("%f",&p);
   printf("Enter the rate per annum:");
   scanf("%f",&r);
   printf("Enter the number of years:");
   scanf("%f",&t);
   si=p*r*t/100;
   printf("The simple interest on the given detail is=%f\n",si);
   return 0;
}