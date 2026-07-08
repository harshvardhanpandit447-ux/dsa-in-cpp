#include <iostream>
#include<vector>

using namespace std;

int main() {
    
    vector<int>vec={-5,-4,0,1,2};
    vector<int>ans;
 int i=0;
 int j=vec.size()-1;
 while(i<=j){
    if(vec[i]*vec[i]<vec[j]*vec[j]){
      ans.push_back(vec[i]*vec[i]);
      i++ ; 
    }
   else  if(vec[i]*vec[i]>vec[j]*vec[j]){
     ans.push_back(vec[j]*vec[j]);
     j--;
    }
    else  if(vec[i]*vec[i]==vec[j]*vec[j]){
     ans.push_back(vec[i]*vec[i]);
     j--;
    }
   

   
 }
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
 }
  return 0;
}