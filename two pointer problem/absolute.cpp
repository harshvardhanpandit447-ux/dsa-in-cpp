#include <iostream>
#include<vector>
using namespace std;
void sortarray(vector<int> &nums){
      vector<int>ans;
      int left_ptr=0;
      int right_ptr=nums.size()-1;
while(right_ptr>left_ptr){ 
    if(abs(nums[left_ptr])<abs(nums[right_ptr])){
ans.push_back(nums[right_ptr*right_ptr]);
right_ptr--;
}
   else{
        
        ans.push_back(nums[left_ptr]*nums[left_ptr]);
        left_ptr++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<(ans[i]);
    }
    cout<<endl;
}


}
int main() {
vector<int>vec={4,5,6,7};

sortarray(vec);
for(int i=0;i<5;i++){

    cout<<vec[i]<<endl;
}
  return 0;
}
