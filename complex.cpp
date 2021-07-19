#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
}c;
int main()
{
	struct complex c1;
	printf("\n Enter real part 1:");
	scanf("%d%d",&c.real);
	printf("\n Enter Imaginary part1 :");
	scanf("%d%d",&c.imaginary);
	printf("\n Enter real part 2:");
	scanf("%d%d",&c1.real);
	printf("\n Enter Imaginary part2 :");
	scanf("%d%d",&c1.imaginary);
	printf("\n The complex number is : %d + i %d",c.real,c.imaginary);
	printf("\n The complex number is : %d + i %d",c1.real,c1.imaginary);

}
