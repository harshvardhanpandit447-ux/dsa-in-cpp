#include <iostream>

using namespace std;

int main() {
int array[5]={5,4,2,-2,6};
int size=6;


for(int i=0;i<size;i++){
if(array[i]==2){
    cout<<("Number found in array")<<i;
    break;
}
    
}
  return 0; 
} 
