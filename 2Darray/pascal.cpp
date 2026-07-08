#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=a;i>0;i--){
fact=fact*i;
    }
    
    return fact;
}
int main(){
    int n=5;
    int factorial;
    int diviser;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
diviser=fact(i-j)*fact(j);
factorial=fact(i)/diviser;
cout<<factorial<<" ";
        }
        cout<<endl;
    }

 return 0;
}