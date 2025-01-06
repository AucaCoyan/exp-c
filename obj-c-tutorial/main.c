//
// main.c
//

#include <math.h>
#include <float.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, const char *argv[]) {
    // code to be extpected here
    printf("Hello world!");

	// variable inizialization
	// condition where the loop _runs_
	for (int i = 0; i < argc; i++) {
		printf("arg %d : %s\n", i, argv[i]);
	}

	/*
	 * basic types
	short %d
	int %d
	long %d
	float %f
	double %lf
	chars %c
	struct
	pointer
	*/

	// camel case
	float fTemp;
	printf("Enter Temp in F: ");
	scanf("%f", &fTemp);

	float cTemp = (fTemp - 32) / 1.8;

	printf("%.1f degrees Celsius\n", cTemp);

	printf("Min float possible: %e\n", FLT_MAX);
	printf("Max float possible: %e\n", FLT_MIN);

	int age = 13;

	if (age <= 6) {
		int j = 15;
		printf("You're in Kindergarten\n");
	} else if (age <= 13) {
		printf("You're in Elementary\n");
	} else {
		printf("You're in High School\n");
	}
	
	// comparison operators < > <= >= == !=
	// logical operators && and || or
	
	// booleans are 1 for true and 0 for false
	bool isElementary = ((age >= 12) && (age <= 13));
	printf("Is in elementary: %d\n", isElementary);
	printf("Opposite of true %d\n", (!true));

	// it has also ternary operators
	bool isHighScool = (age > 13) ? 1 : 0;

    return 0;
}
