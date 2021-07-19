#include<stdio.h>
int main()
{
	int days = 365;
	int weeks;
	int months;
	int years;
	weeks = days/7;
	months = days/30;
	years = days/365;
	printf(" The number of %d %d %d",weeks,months,years);
}
