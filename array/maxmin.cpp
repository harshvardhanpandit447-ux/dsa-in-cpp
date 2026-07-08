#include <iostream>

using namespace std;

int main() {
int array[5]={5,4,2,-2,6};
int size=6;

int Smallest=__INT_MAX__;
int largest=__INT_MAX__;
for(int i=0;i<size;i++){
    Smallest =min(array[i],Smallest); 
largest= max(array[i],largest);
}
cout<<Smallest<<endl;
cout<<largest<<endl;
  return 0; 
} 
