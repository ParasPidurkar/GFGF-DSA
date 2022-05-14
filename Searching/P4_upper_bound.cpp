#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v ={1,2,3,4,5,6,6,6,6,7,8,9};
    int i;
    i=upper_bound(v.begin(),v.end(),6)-v.begin();
    cout<<"At Index "<<i-1<<" element is  "<<v.at(i-1);
    return 0;
}
