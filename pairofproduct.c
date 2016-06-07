/* This program print Yes if a pair is found to generate product and No if pair can not be found in the array */

#include <stdio.h>

/* isProduct (int array[], int number_of_elements, int product) 
	returns true if product can be found with a pair
	returns false if product can NOT be found with a pair
*/
int isProduct(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x == arr[i]*arr[j]) {
				return 1;
			}
		}
	}

	return 0;
}

int main( int argc, char* argv[] )
{
	int arr[] = {10, 20, 15, 5, 3, 7};

	int n = sizeof(arr)/sizeof(arr[0]);

	int product = 50;
	isProduct(arr, n, product)?printf("Yes\n"):printf("No\n");

	product = 34;
	isProduct(arr, n, product)?printf("Yes\n"):printf("No\n");

	return 0;
}
