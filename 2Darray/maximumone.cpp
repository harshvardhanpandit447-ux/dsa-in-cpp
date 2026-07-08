#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;
int main(){
      int array[3][4]={0,1,1,1,0,0,0,1,0,0,0,1};
      vector<int>vec;
      for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<array[i][j]<<(" ");
        }
cout<<endl;
      }
      for(int i=0;i<3;i++){
          int sum=0;
        for(int j=0;j<4;j++){
         sum = sum+array[i][j];
        }
        vec.push_back(sum);
    }
    int value=INT_MIN;
    int index;
    
for(int i=1;i<vec.size();i++){
  if(value < vec[i]){
value = vec[i];
 index=i;
  }
}
cout<<index;
    return 0;


}