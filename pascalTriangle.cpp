#include<bits/stdc++.h>
using namespace std;
// Time-O(n^2)
//Space-O(1)-bcz the vectors are not used for computing values, but just to store them.

/** 
# Types of questions can be asked
1.value at given col and row---r-1(C)c-1---O(r,1)
2.particular row--similar to gen function---o(n,1)
3.full triangle--O(n^2,1)

**/
vector<int>gen(int r)
{
    long long ans=1;
    vector<int>a;
    a.push_back(1);
    for(int c=1;c<r;c++)
    {
        ans=ans*(r-c);
        ans=ans/c;
        a.push_back(ans);
    }
    return a;
    
    
}
 vector<vector<int>>pascal(int n)
 {
     vector<vector<int>>v;
     for(int i=1;i<=n;i++)
     {
         v.push_back(gen(i));
         
     }
     return v;
 }




int main()
{
    int n=5;
    vector<vector<int>> x;
    x = pascal(n);
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
