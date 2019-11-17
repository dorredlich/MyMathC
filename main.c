#include <stdio.h>


#include "myMath.h"


int main(){

	
  	double x;
	printf("enter number: ");
	scanf("%lf", &x);
	double result;
	result = add(Exp((int)x),Pow(x,3));
	result = sub(result,2);
	printf("f1(x) = e^x + x^3 - 2 =  %0.4lf\n", result);
	result = add(mul(x,3), mul(Pow(x,2),2));
	printf("f2(x) = 3x + 2x^2 =  %0.4lf\n", result);
	result = sub(div(mul(Pow(x,3), 4), 5), mul(x,2));
	printf("f3(x) = (4x^3)/5 - 2x = %0.4lf\n", result);
}
