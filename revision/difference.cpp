#include <iostream>
#include<vector>

using namespace std;

int main() {
    
    vector<int>vec={5,10,15,20,26};
    int x=10;
  int i=0;
  int j=1;
  while(i<j){
      if(abs(vec[i]-vec[j])<x){
        j++;
      }
     else if(abs(vec[i]-vec[j])>x){
        i++;
    }
    
    else if(abs(vec[i]-vec[j])==x){
        cout<<("Found the pair");
        cout<<vec[i]<<" "<<vec[j]<<endl;
        break;
    }
    else{
        cout<<("Pair not found ");
    }
      
}

  return 0;
}