#include <stdio.h>
#include <math.h>
double ft(double nbr);
int main (){
     double a = 0.0;
    double b = 0.0;
    double epsilon = pow(10,-4);
    double air = 0.0;
    
    printf("Entrer l'interval:\n");
    printf("a:");scanf("%lf",&a);
    printf("b:");scanf("%lf",&b);
    /*
    while( (a+epsilon) < b){
		air += epsilon * ft(a);
		a += epsilon;
	}
	*/
	while ( (a+epsilon) < b){
		air += ( ( ft(a)+ft(a+epsilon) ) * epsilon ) /2;
		a += epsilon;
	}
	printf("%lf\n",air);
    return 0;
}

double ft(double nbr){
    return log(nbr) - 3;
}
