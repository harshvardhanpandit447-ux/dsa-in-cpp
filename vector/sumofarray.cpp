#include <iostream>
#include<vector>

using namespace std;

int main() {
    int ans=0;
    vector<int>  nums = {4,2,1,2,1};
    for(int val: nums ){
        ans=ans+val;
    }
   cout<<ans<<endl;
  return 0;
}