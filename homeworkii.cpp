#include <iostream>

int sum(const int arr[], int n)
{
    int sum = 0; // initialize sum


    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main() {
    int arr[4] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of given array is %d", sum(arr, n));
    return 0;

}