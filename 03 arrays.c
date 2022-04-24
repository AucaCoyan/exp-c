#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// statically sized array (empty)
	int my_array[5];
	
	// counter variable
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d: %d\n", i, my_array[i]);
		
	}
	// returns 0 0 and 3 trash integers, because you didn't specified the default value
	
	int my_array2[5] = {0};
	int j;
	for (j = 0; j < 5; j++)
	{
		printf("%d: %d\n", j, my_array2[j]);
		
	}

	// assign values by element
	int my_array3[4];
	my_array3[1] = 1337;
	my_array3[4] = 4097;

	// dynamically sized array (empty)
	// you have to allocate memory from the heap
	// and that's where #include <stdlib.h> comes from
	int *my_array4 = malloc(sizeof(int) * 5);
	// you can use a pointer to that mem allocation, 
	// and the size of the malloc is asigned in bytes
	
	int k;
	for (k = 0; k < 5; k++)
	{
		printf("%d: %d\n", k, my_array4[k]);
		// it's the same my_array3 even it's a pointer, not a var
		
	}


	return 0;
}
