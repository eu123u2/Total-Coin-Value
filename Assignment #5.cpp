/*Ezigbo Ugochukwu 2/23/2020 GENG 102*/
/*Given the number of coins, this program will compute the amount of money in dollars*/

#include <stdio.h>
#include <math.h>

int main (void)
{
	/*declare variables*/
	int d1, q1, d2, n1, p1;
	float D;
	
	/*Get input values*/
	printf("Enter the number of dollars, quarters, dimes, nickles, and pennies, respectively");
	scanf("%d %d %d %d %d", &d1, &q1, &d2, &n1, &p1);
	
	/*Calculate*/
	D=(1.0*d1)+(0.25*q1)+(0.1*d2)+(0.05*n1)+(0.01*p1);
	
	/*Display value*/
	printf("With %d dollar(s), %d quarter(s), %d dime(s), %d nickle(s), and %d penny(ies), the total amount of money in dollars would be %.2f. /n", d1, q1, d2, n1, p1, D);
	
	/*exit*/
	return 0;
}
/*Enter the number of dollars, quarters, dimes, nickles, and pennies, respectively2 1 12 5 26
With 2 dollar(s), 1 quarter(s), 12 dime(s), 5 nickle(s), and 26 penny(ies), the total amount of money in dollars would be 3.96. /n
Enter the number of dollars, quarters, dimes, nickles, and pennies, respectively3 5 6 7 18
With 3 dollar(s), 5 quarter(s), 6 dime(s), 7 nickle(s), and 18 penny(ies), the total amount of money in dollars would be 5.38, /n*/
