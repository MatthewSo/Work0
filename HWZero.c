/* Matthew So */
/* Systems */
/* HW 1 */
/* 9/19/16 */


#include <stdio.h> 
 #include <stdlib.h>
#include <limits.h>

//#6
/* The sum of the squares of the first ten natural numbers is, */

/* 12 + 22 + ... + 102 = 385 */
/* The square of the sum of the first ten natural numbers is, */

/* (1 + 2 + ... + 10)2 = 552 = 3025 */
/* Hence the difference between the sum of the squares of the first 
ten natural numbers and the square of the sum is 3025 Å| 385 = 2640. */

/* Find the difference between the sum of the squares of the first one 
hundred natural numbers and the square of the sum. */

int sumSquares(int n){
  int i;
  int addSum = 0;
  int squareSum = 0;
  for (i = 1; i <= n; i++){
    addSum += i;
    squareSum += (i * i);
  }
  addSum = (addSum * addSum);
  return addSum - squareSum;}

//#5
/* 2520 is the smallest number that can be divided by each of the numbers 
from 1 to 10 without any remainder. */

/* What is the smallest positive number that is evenly divisible by all 
of the numbers from 1 to 20? */

int smallestMultiple(int n){
  int i;
  int j;
  char b;
  for (i = 40; i < INT_MAX; i += 20){
     /* printf("%d\n", i ); */
    b = 1;
    for (j = 1; j <= n ; j++){
      
      /* printf("%d\n", i % j); */
      /* printf("%d\n", ((i % j) > 0)); */
      if ((i % j) > 0){
	b = 0;}
    }
    /* printf("%d\n", b); */
      if (b){
	return i;}}
  return -1;}


int main(){
  printf ("The difference of sums vs squares for the first 100 numbers is %d \n",sumSquares(100));
  printf ("The smallest positive number divisible by 1 - 20 is %d \n",smallestMultiple(20));
}
