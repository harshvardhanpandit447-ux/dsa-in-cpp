#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;
int noofones(vector<vector<int>>& vec){
    int maxones = 0;
    int maxonesrow = -1;
    int column = vec[0].size();

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]==1){
                int numberofones = column - j;

                if(numberofones > maxones){
                    maxones = numberofones; 
                    maxonesrow = i;
                }
                break;
            }
        }
    }
    return maxonesrow;
}
int main(){
int n,m;
int result;
cin>>m>>n;
      vector<vector<int>>vec(m,vector<int>(n));
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<("Enter the elements of array: ");
            cin>>vec[i][j];
        }
    }

    int result=noofones(vec);
    cout<<result<<endl;
    return 0;


    }