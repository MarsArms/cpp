#include <iostream>

using namespace std;

int main(){






    cout<<" enter number between 1 and 10"<<endl;

    int n;

    cin>>n;

    while(n<=1 || n>=10)

    {
        cout<<"please enter number between 1 and 10"<<endl;
        cin>>n;

    }

    for (int i = n/2; i < n; i++) {
        cout<<i<<",";


    }

}