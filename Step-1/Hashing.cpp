#include <iostream>
using namespace std;

//Basic hashing program
int main()
{
    //Creating an array
    int n;
    cin>>n;
    int arr[n];
    cout<<"Entre the number in array"<<endl;
    //Taking the input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Creating a hash array
    int hash[15] ={0};        //Assume for now we will be only having max num = 14
    
    //Precompute
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] = hash[arr[i]] + 1;
    }

    cout<<"Fetch"<<endl;
    cout<<"**************************************"<<endl;
    int q;
    cout<<"How many numbers u wanna search: "<<endl;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<hash[number];
    }
    return 0;
}