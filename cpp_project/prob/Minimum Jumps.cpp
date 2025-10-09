#include <iostream>
#include <vector>
using namespace std;



class Solution {

  public:

    int maxV(int a, int b, vector<int>& arr){

        int ans = -1 ;
        int k =-1;

        for (int i= a; i<b;i++){
            if ( arr[i] > ans){
                ans = arr[i];
                k = i;
            }
        }
        
        return k;
    }
    
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        int c=0;
        int i = 1;
        
        if (n==0) return 0;

        if(arr[0] == 0){
            return -1;
        }  

        while (i<n){

            if (arr[i] == (n-1-i)) return c+1;
            if (arr[i] <(n-1-i)){

            i = maxV(i+1, i+arr[i], arr);
            ++c;

            }
        }


    return c;

    }
        // code here
        
  
};




int main(){

    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    Solution s;
    cout<<s.minJumps(arr)<<endl;





return 0 ;}