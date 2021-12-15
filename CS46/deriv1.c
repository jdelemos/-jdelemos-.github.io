/*
Name: Jonathon Michael Delemos
Community College: Sierra Rocklin College
Date: 11/1/2021
Assignment: General Programming Practice
Future Stock Potential Using Mtan (Derivative) Slope Approximation
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>



/*

time based domain: time series analysis**
predictive functions to determine growth
regression
track 20 stocks

time series forecasting

*/

//method to calc 5 year derivative
//still kinda curious if we can make the approximation more precise
// ask tim/cam

int printOption(void) {

  printf("List of menu options:\n");
  printf("Monthly Derivative  Last Month [M]\n");
  printf("Five Year Derivative           [T]\n");
  printf("Compare two Stocks using Five year Derivative[H]\n");
  printf("Quit                           [Q]\n");
  printf("Option Select> ");

return 0;
}

int compare5(void){

  int x1, x2, x3, x4;
  int y1, y2, y3, y4;
  int year, tYear;
  int cYear = 2021;
  char end;

  //  printf("Enter IPO (0) age:\n");
  //   scanf("%d", &x1);
    printf("Enter Initial Price Offer: \n");
    scanf("\n%d", &y1);
    printf("\nEnter Current Stock age in years:\n");
    scanf("\n%d", &x2);
    printf("\nEnter Current Stock value: \n");
    scanf("\n%d", &y2);

    printf("\nEnter Initial Price Offer for STOCK #2: \n");
    scanf("\n%d", &y3);
    printf("\nEnter Current Stock age in years for STOCK #2:\n");
    scanf("\n%d", &x3);
    printf("\nEnter Current Stock value for STOCK #2: \n");
    scanf("\n%d", &y4);


    // this is basically just a tangent line of the graph, starting
    // when it was created and ending where it is currently +/- rep
    float deriv = ((1.0)* (y2 - y1)) / (x2);
    float actual = deriv/10;

    float deriv1 = ((1.0)* (y4 - y3)) / (x3);
    float actual1 = deriv1/10;

  printf("\nThe derivative (growth) of the stock from it's IPO is %.1f dollar amount every year.\n\n\n", deriv);
  printf("\nThe derivative (growth) of the stock from it's IPO is %.1f dollar amount every year.\n\n\n", deriv1);

  if (deriv1 > deriv){

  printf("The second stock is superior with a growth rate of %.1f dollars per year\n\n", deriv1);

  }

  else {

  printf("The first stock is superior with a growth rate of %.1f dollars per year\n\n", deriv);


  }




  printf("Enter future year evaluation you wish to calculate for: \n");
  scanf("\n%d", &year);
  tYear = year - cYear;

  double fWorth = (tYear * deriv) + y2;
  double fWorth1 = (tYear * deriv1) + y2;
  printf("\nUsing the current growth rate, the future worth of your first stock in year %d is %.2f.\n", year, fWorth);
  printf("\nUsing the current growth rate, the future worth of your first stock in year %d is %.2f.\n", year, fWorth1);

// is this lazy to return a zero?
  printf("Press any character to end the simulation...");
  scanf("You will now shut down the program with a snap of your fingers.%c", end);
  exit(1);



return 0;
}

int calc5(void){
  int x1, x2;
  int y1, y2;
  int year, tYear;
  int cYear = 2021;

  //  printf("Enter IPO (0) age:\n");
  //   scanf("%d", &x1);
    printf("Enter Initial Price Offer: \n");
    scanf("\n%d", &y1);
    printf("\nEnter Current Stock age in years:\n");
    scanf("\n%d", &x2);
    printf("\nEnter Current Stock value: \n");
    scanf("\n%d", &y2);

    // this is basically just a tangent line of the graph, starting
    // when it was created and ending where it is currently +/- rep
    float deriv = ((1.0)* (y2 - y1)) / (x2);
    float actual = deriv/10;

  printf("\nThe derivative (growth) of the stock from it's IPO is %.1f dollar amount every year.\n\n\n", deriv);

  printf("Enter future year evaluation you wish to calculate for: \n");
  scanf("\n%d", &year);
  tYear = year - cYear;

  double fWorth = (tYear * deriv) + y2;
  printf("\nUsing the current growth rate, the future worth of your stock in year %d is %.2f.\n", year, fWorth);

// is this lazy to return a zero?
return 0;

}


int calcM(void){
  int x1, x2;
  int y1, y2;
  int day, tDay;
  int cDay;

    //printf("Enter Day Age (0) age:\n");
    //scanf("%d", &x1);
    printf("Enter Starting  Month Stock Price: \n");
    scanf("\n%d", &y1);
    printf("\nEnter Current Stock age in days:\n");
    scanf("\n%d", &x2);
    printf("\nEnter Current Stock value: \n");
    scanf("\n%d", &y2);

    // this is basically just a tangent line of the graph, starting
    // when it was created and ending where it is currently +/- rep
    float deriv = ((1.0)* (y2 - y1)) / (x2);
    float actual = deriv/10;

  printf("\nThe derivative (growth) of the stock from it's IPO is %.1f dollar amount every day.\n\n\n", deriv);

  printf("What is the current day of the month (Numerical): \n");
  scanf("\n%d", &cDay);


  printf("Enter future day evaluation you wish to calculate for: \n");
  scanf("\n%d", &day);
  tDay = day - cDay;

  double fWorth = (tDay * deriv) + y2;
  printf("\nUsing the current growth rate, the future worth of your stock after %d days is %.2f.\n", day, fWorth);

// is this lazy to return a zero?
return 0;

}//end method


// main fucntion
int main () {

printOption();
char option;


while (option!= 'Q') {


scanf("%c%*c", &option);
// switch to interpet option
switch (option) {

case 'M':
    printf("\n\n");
    calcM();
    break;
case 'T':
    printf("\n\n");
    calc5();
    break;
case 'H':
    printf("\n\n");
    compare5();
    break;
case 'Q':
    printf("\n\n");
    exit(0);
    break;
default:
    printf("\nUnrecognized option. Please select valid option.\n\n");
    printOption();
    break;
}

}

return 0;
}//end program
