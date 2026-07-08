#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
    int size=5;
    int  nums[5] = {4,2,8,2,1};
    int largest=INT_MIN;;
    int smallest=INT_MAX;
    int largerindex=0;
    int smallerindex=0;
    for(int i=0;i<5;i++){
        
        if(nums[i]>largest){
    
        largest=nums[i];
        largerindex=i;

    }
    if(nums[i]<smallest){
        smallest=nums[i];
        smallerindex=i;
    }
}
    
        swap(nums[largerindex],nums[smallerindex]);
    for(int i=0;i<size;i++)
   cout<<nums[i]<<endl;
  return 0;
}