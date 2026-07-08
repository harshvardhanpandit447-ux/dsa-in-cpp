#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n;
   int array[5];
   int x=7;
   for(int i=0;i<5;i++){
    cout<<("Enter the array:");
    cin>>array[i];
   }
   for(int i=0;i<n;i++){
    if(array[i]+array[i+1]==x){
        cout<<(array[i])<<("and ")<<(array[i+1]);
break;
    }

   }
  return 0;
}