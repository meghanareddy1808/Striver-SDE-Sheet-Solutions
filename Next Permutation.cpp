#include<bits/stdc++.h>
using namespace std;
//Intuition---
/*
First find the breaking point where this cond is broken--from last element elements keep incresing in magnitude
if this condition is broken,note the index as ind break array.else return reverse of that array.
Next find the elemnt from last which is greater than ind swap theose elemnts and break
Finally reverse elemnets from ind+1 to end
*/
void nextPermutation(vector<int>& nums) {
        int ind=-1;
        int n=nums.size();
  //TC-O(3*n)---
  //Space-O(1)
        for(int i=n-2;i>=0;i--) //o(n)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }

        }
        if(ind==-1)
        {
           reverse(nums.begin(),nums.end());
           return;
        }
        
        for(int i=n-1;i>=0;i--)//O(n)
        {
            if(nums[i]>nums[ind])
            {
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end()); //O(n)
        return;
    }
int main()
{

vector<int>nums={1,2,3};
nextPermutation(nums);
for(int i=0;i<nums.size();i++)
{
    cout<<nums[i]<<" ";
}

}
