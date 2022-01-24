// C program to illustrate
// levels of pointer
#include <stdio.h>

// Driver Code
int main()
{
	// Initializing integer variable
	int var = 10;

	// Declaring pointer variables
	// upto level-3
	int *ptr1, **ptr2, ***ptr3;

	// Initializing pointer variables
	ptr1 = &var;
	ptr2 = &ptr1;
	ptr3 = &ptr2;

	// Printing values BEFORE updation
	printf("Before:\n");
	printf("Value of var = %d\n", var);

	printf("Value of var using level-1"
		" pointer = %d\n",
		*ptr1);

	printf("Value of var using level-2"
		" pointer = %d\n",
		**ptr2);

	printf("Value of var using level-3"
		" pointer = %d\n",
		***ptr3);

	// Updating var's value using
	// level-3 pointer
	***ptr3 = 35;

	// Printing values AFTER updation
	printf("After:\n");
	printf("Value of var = %d\n", var);

	printf("Value of var using level-1"
		" pointer = %d\n",
		*ptr1);

	printf("Value of var using level-2"
		" pointer = %d\n",
		**ptr2);

	printf("Value of var using level-3"
		" pointer = %d\n",
		***ptr3);

	return 0;
}
