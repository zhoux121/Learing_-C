//----------------------------------------------
// Name:           xiaoxin zhou
// Student Number: 111310199
// Email:          xzhou127@myseneca.ca
// Section:        IPC144SII.04992.2194
// Workshop:       2 (in-lab)
//----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include<stdio.h>
int main(void) {
	// const loonie and quarter and .... more
	const int LOONIES = 1;
	const float QUARTERS = 0.25;
	const float GST = 1.13;
	const float DIMES = 0.10;
	const float NICKEL = 0.05;
	const float PENNIE = 0.01;
	// input payment
	float pay;
	printf("Please enter the amount to be paid: $");
	scanf("%f", &pay);
	printf("GST: %.2f\n", GST);
	const float after_tax = (pay*GST) + 0.005;
	printf("Balance owing: %.2f\n", after_tax);
	//display output
	int loo = (int)after_tax / LOONIES;
	float loo_r = (after_tax - (int)after_tax / LOONIES);
	int quar = (int)(loo_r / QUARTERS);
	float quar_r = loo_r - (quar * QUARTERS);
	int dim = (int)(quar_r / DIMES);
	float dim_r = quar_r - dim * DIMES;
	int nick = (int)(dim_r / NICKEL);
	float nick_r = dim_r - nick * NICKEL;
	int penn = (int)(nick_r / PENNIE);
	float penn_r = nick_r - penn * PENNIE;
	printf("Loonies required: %d, balance owing $%.2f\n", loo, loo_r);
	printf("Quarters required: %d, balance owing$%.2f\n", quar, quar_r);
	printf("Dimes required: %d, balance owing$%.2f\n", dim, dim_r);
	printf("Nickels required: %d, balance owing$%.2f\n", nick, nick_r);
	printf("Pennies required: %d, balance owing$%.2f\n", penn, penn_r);
	return 0;
}