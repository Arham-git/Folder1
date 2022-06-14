//Combinational pairs without duplicates
#include<bits/stdc++.h>

void fo(vector<vector<int>>&v1 ,vector<int>comb, int n, int idx, int a ,vector<int> v, int k){
for(int i=idx; i<n; i++ ){
     if(a==k-1){
     comb[a]=v[i];
     v1.push_back(comb);   }
     else { 
     comb[a]=v[i];
     fo(v1 , comb , n+1, i+1, a+1, v, k);
     }
}
}
int main() {
vector<vector<int>> ans;
     vector<int> v = {1,2,3,4,5};     //sample input 
     int k =0; int p;                
     cout<<"Enter pair:"; cin>>k;     //asks input
     vector<int> temp(k);
 fo(ans,temp,v.size()-k+1,0,0,v,k);
 //printing
    for (int i = 0; i < ans.size(); i++) {
        printvec(ans[i]);
        cout << endl;
    }
cout<<ans.size();

  return 0;   }
