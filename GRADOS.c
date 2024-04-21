#include<stdio.h>
#include<math.h>
const float PI=3.1416;
int main() {

	double radianes, grados;
	printf("ingrese los grados ");
	scanf("%lf", &grados);
	radianes=(grados*PI)/180;
	printf(" el valor en radines es : %lf\n", radianes);
	return 0 ;
} 