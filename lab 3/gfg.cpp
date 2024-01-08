#include <stdio.h>


// Function to implement upper_bound
int upper_Bound(int arr[], int N, int X)
{
    int mid;

    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;

    // Till low is less than high
    while (low < high) {
        // Find the middle index
        mid = low + (high - low) / 2;

        // If X is greater than or equal
        // to arr[mid] then find
        // in right subarray
        if (X >= arr[mid]) {
            low = mid + 1;
        }

        // If X is less than arr[mid]
        // then find in left subarray
        else {
            high = mid;
        }
    }

    // Return the upper_bound index
    return low;
}



// Driver Code
int main()
{
    // Given array
    int arr[] = { 2, 7, 15, 24, 40, 57 };
    int N = sizeof(arr) / sizeof(arr[0]);
printf("%d \n",N);
    // Element whose lower bound and
    // upper bound to be found
    int X = 14;

    // Function Call
    int i=upper_Bound(arr, N, X);
    printf("%d",i);
    return 0;
}
