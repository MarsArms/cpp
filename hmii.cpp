

#include <iostream>
#include <numeric>
using namespace std;


int arraySum(int a[], int n)
{
    int initial_sum  = 0;
    return accumulate(a, a+n, initial_sum);
}

int main()
{
    int a[] = {5 , 10 , 15} ;
    int n = sizeof(a)/sizeof(a[0]);
    cout << arraySum(a, n);
    return 0;
}