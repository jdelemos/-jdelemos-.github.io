/*
Name: Jonathon Michael Delemos
Community College: Sierra Rocklin College
Date: 11/1/2021
Assignment: General Programming Practice
Future Stock Potential Using Mtan (Derivative) Slope Approximation
*/


#include <stdio.h>
#include <math.h>





int main () {

// declared variables
// x and y values have been read into the system and are now available for use.
int x1, x2;
int y1, y2;
int year;

  printf("Enter Intital Age upon Stock Release(0) age:\n");
  scanf("%d", &x1);
  printf("\nEnter Initial Price Offer: \n");
  scanf("\n%d", &y1);
  printf("\nEnter Current Stock age in years:\n");
  scanf("\n%d", &x2);
  printf("\nEnter Stock value: \n");
  scanf("\n%d", &y2);


  // this is basically just a tangent line of the graph, starting
  // when it was created and ending where it is currently +/- rep
  float deriv = ((1.0)* (y2 - y1)) / (x2 - x1);
  float actual = deriv/10;

printf("\nThe derivative (growth) of the stock from it's IPO is %.1f dollar amount every year.\n\n\n", deriv);

printf("Enter future year evaluation you wish to calculate for: \n");
scanf("\n%d", &year);

double fWorth = (year * deriv) + y2;
printf("\nThe future worth of your stock after %d years is %.2f.", year, fWorth);


return 0;
}
