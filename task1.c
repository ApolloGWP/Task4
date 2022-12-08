#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv) {	
	if( argc >=2 ) 
	{
		printf("program name = %s",argv[0]);
		printf("\nfirst param name = %s ",argv[1]);	
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int c = atoi(argv[3]);
		printf("\nsecond param name = %s ",argv[2]);	
		printf("\nthird param name = %s\n ",argv[3]);	
		float d = sqrt( pow(b,2) - 4*a*c);
		if (d < 0){
			printf("No roots");
			return 0;
		}
		if (d == 0){
			float x1 = ((-1)*b)/(2*a);
			printf("Answer : x = %f", x1);
			return 0;
		}
		else{
			float x1 = ((-1)*b + d)/(2*a);
			float x2 = ((-1)*b - d)/(2*a);
			printf("Answer : \nx1 = %f\nx2 = %f", x1, x2);
			return 0;
		}
	}
	return 0;
}