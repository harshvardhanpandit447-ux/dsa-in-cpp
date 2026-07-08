#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int n=3;
    vector<vector<int>>vec(n,vector<int>(n));
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
       cout<<("Enter the element in array 1 :");

              cin>>vec[i][j];
 
           
        }
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<i;j++){
       
               swap(vec[i][j],vec[j][i]);
 
           
        }
    }
for(int i=0;i<vec.size();i++){
    reverse(vec[i].begin(),vec[i].end());
}



 for(int i=0;i<=vec.size();i++){
        for(int j=0;j<vec.size();j++){
           
cout<<vec[i][j]<<(" ");
        }
        cout<<endl;
    }

    
    return 0;

}