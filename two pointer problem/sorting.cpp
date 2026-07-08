//sorting o and 1

#include <iostream>
#include<vector>
using namespace std;
void sortarray(vector<int> &nums){
    int zerocount=0;
    for(int ele:nums){
        if(nums[ele]==0){
            zerocount++;
            }      
    }
    for(int i=0;i< nums.size() ;i++){
if(i<zerocount){
    nums[i]=0;
}
else{
    nums[i]=1;
}
    }
}
int main() {
vector<int>vec={0,1,0,1,0};
sortarray(vec);
for(int i=0;i<5;i++){

    cout<<vec[i]<<endl;
}
  return 0;
}
