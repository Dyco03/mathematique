#include <stdio.h>
#include <math.h>
double ft(double nbr);
int main(){
    double a = 0.0;
    double b = 0.0;
    double milieu = 0.0;
    double epsilon = pow(10,-4);
    printf("Entrer l'interval:\n");
    printf("a:");scanf("%lf",&a);
    printf("b:");scanf("%lf",&b);
	
	if(ft(a)*ft(b)<0){
		while( fabs(a-b) >=epsilon ){
			milieu= (a+b)/2;
			if( ft(a)*ft(milieu) < 0){
				b = milieu;
			}
			else{
					a = milieu;
			}
		}

		
	}
	else{
		printf("aucune solution\n");
	}	
    printf("a=%lf et b=%lf",a,b);
    return 0;
}
double ft(double nbr){
    return log(nbr) - 3;
}
