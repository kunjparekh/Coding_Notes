#include<bits/stdc++.h>
using namespace std;

//Swapping 2 vectors program
int main()
{
    // vector container declaration
    vector<int> myvector1(5,10);
    vector<int> myvector2(5,1);
 
    // using swap() function to swap
    // elements of vector
    myvector1.swap(myvector2);
 
    // printing the first vector
    cout << "myvector1 = ";
    for (auto it = myvector1.begin();
         it < myvector1.end(); ++it)
        cout << *it << " ";
 
    // printing the second vector
    cout << endl
         << "myvector2 = ";
    for (auto it = myvector2.begin();
         it < myvector2.end(); ++it)
        cout << *it << " ";
    return 0;
}
