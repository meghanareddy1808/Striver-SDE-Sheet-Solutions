#include<bits/stdc++.h>
using namespace std;
// if an element is zero set entire row and column to zero
//First make note of row and col numbers of each zero
//in second loop set corresponding rows and col wlwmnwts to zero


void setZeroes(vector<vector<int>>& mat) {
        // Using pair
        //O(2*n*m)---because we are traversing twice---one below and other one below that-n-rows,m-cols
        //O(1)-space
        
        vector<pair<int,int>>a;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                  a.push_back(make_pair(i,j));
                }
               
            }
        }
        for(int i=0;i<a.size();i++)
        {
            int r=a[i].first;
            int c=a[i].second;
            //row to zero
            for(int j=0;j<mat[0].size();j++)
            {
                mat[r][j]=0;
            }
            //col to zero
            
            for(int j=0;j<mat.size();j++)
            {
                mat[j][c]=0;
            }
        }
        
        
    }
int main()
{

vector<vector<int>>mat= {{1,1,1},{1,0,1},{1,1,1}};
setZeroes(mat);
 for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


}
