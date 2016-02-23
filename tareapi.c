#include<stdio.h>
#include<math.h>
int main( int argc, char const* argv []){
	int j=4, e, signo=1;
	double pi, suma;
	for(e=1; e<=99999; e+=2){
	suma= signo*((double)j/e);
	pi = pi + suma;
	signo= signo* -1;
	}
	printf("Pi es: \n%1.54f", pi);
	return 0;
}
