#include <iostream>
#include<vector>
using namespace std;
void prifixsum(vector<int>& nums){
    for(int i=1;i<5;i++){
    nums[i]=nums[i-1]+nums[i];

    }
}

int main() {
vector<int>vec;
int ele;
for(int i=0;i<5;i++){
    cout<<("Enter the value of ele");
     cin>>ele;
     vec.push_back(ele);

    }
prifixsum(vec);
for(int i=0;i<5;i++){
    cout<<(vec[i]);
   

    }

  return 0;
}
