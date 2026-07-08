#include <iostream>
#include<vector>

using namespace std;

int main() {
   int array[6]={4,2,5,6,1,5};
   int anssum=0;
   int ans;

int oddnumber=0;
   for(int i=0;i<6;i++){
    if(i%2==0){
anssum=anssum+array[i];

    }else{
        oddnumber=array[i]+oddnumber;

    }
   }
   ans=anssum-oddnumber;
   cout<<(ans); 
  return 0;
}