#include <iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    
    return fact;
}
int main(){
  int n=8;
  int r=2;
  int divide;
  int multiply=fact(r)*fact(n-r); 
  
  divide=fact(n)/multiply;


cout<<divide<<endl;
   
    return 0;

}