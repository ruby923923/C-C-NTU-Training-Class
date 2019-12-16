#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c, d, e, f;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	c = a + b; 
	d = a - b;
	e = a * b;
	f = a / b;
	
	printf("%.2lf + %.2lf = %.2lf\n", a, b, c);
	printf("%.2lf - %.2lf = %.2lf\n", a, b, d);
	printf("%.2lf * %.2lf = %.2lf\n", a, b, e);
	printf("%.2lf / %.2lf = %.2lf\n", a, b, f);
	return 0;
}
