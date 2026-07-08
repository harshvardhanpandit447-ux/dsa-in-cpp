//sorting sqaure terms in array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(5);
    int n=5;
    int square=0;
    for(int i=0;i<n;i++){
        cout<<("Enter the array:");
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        square=vec[i]*vec[i];
        square=vec[i];
 
    }
    for(int i=0;i<n;i++){
        cout<<vec[i];
        
    }
    
   cout<<endl;

    return 0;
}