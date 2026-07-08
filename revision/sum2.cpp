#include <iostream>
#include<vector>

using namespace std;

int main() {
    
    vector<int>vec={-2,-1,0,3,6,8,11,12};
    int x=14;
  int i=0;
  int j=5;
  while(i<j){
    if(vec[i]+vec[j]<x){
        i++;
    }
     else if(vec[i]+vec[j]>x){
        j--;
    }
    else if(vec[i]+vec[j]==x){
        cout<<("Found the pair");
        cout<<vec[i]<<" "<<vec[j]<<endl;
        break;
    }
    
        cout<<endl;
}

  return 0;
}