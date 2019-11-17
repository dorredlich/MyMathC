#include<stdio.h>


#include "myMath.h"


double Exp(int x){
	double term = 1.0;
	double result = term;
	for(int i = 1; term > 0.001 || term < -0.001; i++){
	   term = term * x/i;
	   result += term;		
	}
	return result;
}


double Pow(double y, int x){
	int i;
	double power = 1;
	for(i = 0; i < x; i++){
	   power *= y;
	} 
	return power;
	
}

