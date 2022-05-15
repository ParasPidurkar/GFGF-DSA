#include <bits/stdc++.h>
using namespace std;



int main() {
    
   vector<int> arr = {10, 20, 20, 20, 40, 40};

   int up , low=0;
   low = lower_bound(arr.begin(),arr.end(),20)-arr.begin();
   up = upper_bound(arr.begin(),arr.end(),20)-arr.begin();
   cout << (up-low);

	return 0;
}
