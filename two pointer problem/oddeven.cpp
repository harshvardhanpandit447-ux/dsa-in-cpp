//Taker all odd integres in front and even behind  

#include <iostream>
#include<vector>
using namespace std;
void sortarray(vector<int> &nums){
    int left_ptr=0;
    int right_ptr=nums.size();

 while(left_ptr<right_ptr){
    if(nums[left_ptr]%2==0&&nums[right_ptr]%2!=0){
      swap(nums[right_ptr],nums[left_ptr]);

    }
    else if(nums[left_ptr]%2!=0){
        left_ptr++;
    }else if(nums[right_ptr]%2==0){
        right_ptr--;
    }
        
    }
 }
    

int main() {
vector<int>vec={4,5,3,2};
sortarray(vec);
for(int i=0;i<4;i++){

    cout<<vec[i]<<endl;
}
  return 0;
}