#include<bits/stdc++.h>
using namespace std;
int main(){

   int m , n;
   cin >> m >> n;
   vector<vector<int>> grid(n, vector<int>(m));
   int ans = 0;

   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cin >> grid[i][j];
    }
   }

    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cout << grid[i][j] <<" ";
    }
     cout << endl;
   }




}
