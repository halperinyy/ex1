/******************
Name:Yaakov yair Halperin
ID:331580753
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main()
{
  int x,i,t;
  // What bit
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &x);
  printf("Please enter a position:\n");
  scanf("%d", &i);
  t = x >> i;
  t = t & 1;
  printf("The bit in position %d of number %d is: %d\n",i,x,t);

  // Set bit
  printf("\nSet bit:\n");
  int x1,i1,t1,z1;
  printf("Please enter a number:\n");
  scanf("%d", &x1);
  printf("Please enter a position:\n");
  scanf("%d", &i1);
  t1 = 1 << i1;
  z1 = x1 | t1; //light up
  x1 = x1 & (~(t1)); // shut down
  printf("Number with bit %d set to 1: %d\n",i1,z1);
  printf("Number with bit %d set to 0: %d\n",i1,x1);

  // Toggle bit
  printf("\nToggle bit:\n");
  int x2,i2,t2,z2;
  printf("Please enter a number:\n");
  scanf("%d", &x2);
  printf("Please enter a position:\n");
  scanf("%d", &i2);
  t2 = 1 << i2;
  z2 = x2 ^ t2;
  printf("Number with bit %d toggled: %d\n",i2,z2);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int x3,t3,z3;
  printf("Please enter a number:\n");
  scanf("%d", &x3);
  t3 = x3 & 1;
  z3 = t3 ^ 1;
  printf("%d\n",z3);


  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  int x4,y4,t4,h3,h5,h7,h11;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &x4);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &y4);
  t4 = x4 + y4;
  printf("The sum in hexadecimal: %X\n",t4);
  h3 = t4 >> 3;
  h3 = h3 & 1;
  h5 = t4 >> 5;
  h5 = h5 & 1;
  h7 = t4 >> 7;
  h7 = h7 & 1;
  h11 = t4 >> 11;
  h11 = h11 & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",h3,h5,h7,h11);

  printf("Bye!\n");
  
  return 0;

}
