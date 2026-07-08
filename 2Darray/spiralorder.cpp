#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int spiralorder(vector<vector<int>>vec){
    int n=vec.size();
       int left=0;
int right=n-1;
int top=0;
int bottom=n-1;
int direction=0;
while(left<right){
     if(direction==0){
        for(int col=left;col<right;col++){
            cout<<[top][col]<<(" "); 
               }
               top++;
     }
     else if(direction==1){
        for(int row=top;top<=bottom;row++){
            cout<<vec[row][right];
        }
        right --;
     }
else if(direction==2){
    for(int col=right;col>=left;col--){
        cout<<vec[bottom][col];
    }
}
else{
    for(int row=bottom;row>=top;row--){
        cout<<vec[row][left]<<" ";
    }
    left ++;
}
direction
}
}
int main(){
int n=3;
vector<vector<int>>vec(n,vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<("Enter the value of vector:");
cin>>vec[i][j];
    }
}
spiralorder(vec);

    
    
    return 0;

}