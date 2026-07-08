#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>triangle(int a){
    vector<vector<int>>pascal(a);
    for(int i=0;i<a;i++){
        pascal[i].resize(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0||j==i){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
    }
return pascal;
}
int main(){
    vector<vector<int>>pascal;
    int n;
    cout<<("Enter the value of n:");
    cin>>n;
    pascal=triangle(n);

    for(int i=0;i<pascal.size();i++){
        for(int j=0;j<pascal[i].size();j++){
cout<<pascal[i][j]<<(" ");
        }
cout<<endl;
    }
    return 0;
}