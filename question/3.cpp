#include <iostream>
#include<vector>

using namespace std;

int main() {
   int k=1;
   int array[6]={4,5,6,1,2,3};
   //for(int i=0;i<k;i++){

      // array[5]=0;
   //}
  for(int j=1;j<6;j++){
         array[j+k]=array[j];
       
  }
       

   for(int k=0;k<6;k++){


      cout<<array[k]<<endl;
    }
  return 0;
}