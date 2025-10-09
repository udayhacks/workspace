#include <bits/stdc++.h>
using namespace std;



















class Solution {
public:
    int findMin(vector<int>& nums) {
        

        // declaration 
        int n = nums.size();
        int low = 0 ; 
        int high = n-1;
        int mid;
        int res = nums[0] ;



        while (low <= high) {

              mid = (low + high)/2 ;
              res = min({res ,nums[low],nums[high]});

              if (nums[low] <= nums[high]){

                return res ;
              }
              if (nums[mid] > nums[low] ) {
                low  = mid +1 ;
              }
              else{
                high = mid-1;

              }
        }

    return res ;

    }
};



int main (){
int n ;
vector <int> arr ;
arr = {3,1,2};
Solution ad;
ad.findMin(arr);





return 0 ;
}