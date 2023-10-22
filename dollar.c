#include<stdio.h>

#include <math.h>

int main (){

double latiA, longiA, latiB, longiB;
const double pi = 3.1415; 
const int r = 6371;

printf("enter the longitude value of location A:"); 
scanf("%lf", &longiA);
double longiA_Rad = longiA/180.0*pi;

printf("enter the latitude value of location A:"); 
scanf("%lf", &latiA);
double latiA_Rad = latiA/180.0*pi;

printf("enter the longitude value of location B:");
scanf("%lf", &longiB);
double longiB_Rad = longiB/180.0*pi;

printf("enter the latitude value of location B:");
scanf("%lf", &latiB);
double latiB_Rad = latiB/180.0*pi;

double delta = longiB_Rad - longiA_Rad;

double d = r * acos(sin(latiA_Rad) * sin(latiB_Rad) + cos (latiA_Rad) * cos(latiB_Rad) * cos(delta));

printf("location distance\n");
printf(" =====================\n");
printf("origin:\t(%lf , %lf)\n", latiA, longiA);
printf("destination: \t (%1f , %lf)\n" , latiB , longiB);
printf("air distance is %1f kms\n", d);
}
