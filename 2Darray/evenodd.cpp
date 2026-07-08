#include<iostream>
using namespace std;
int main(){
    int n=4;
    int sum=0;
    int value;
    int even;
    int odd;

    for(int i=0;i<n;i++){
        if(i%2==0){
            even=-i;
            value=even;
        }
      else{
             odd=i;
             value=odd;
      }
        
       sum=sum+value;
       
    }
    cout<<sum<<endl;
    return 0;
}
