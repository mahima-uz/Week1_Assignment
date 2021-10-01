#include <bits/stdc++.h>
using namespace std;

// Function to compute partition
int findElement(int arr[], int size)
{
	int right_sum = 0, left_sum = 0;

	// Computing right_sum
	for (int i = 1; i < size; i++)
		right_sum += arr[i];

	// Checking the point of partition
	// i.e. left_Sum == right_sum
	for (int i = 0, j = 1; j < size; i++, j++) {
		right_sum -= arr[j];
		left_sum += arr[i];

		if (left_sum == right_sum)
			return arr[i + 1];
	}

	return -1;
}

// Driver
int main()
{
	int arr[] = { 1,7,3,6,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << findElement(arr, size);
	return 0;
}
