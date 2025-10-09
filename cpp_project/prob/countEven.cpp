#include<iostream>
using namespace std;



class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        
        int ans = 0;
        
        int num = n ;
        int rem ;
        
        while (num>0) {
            
            
            rem = num%10;
            if (n%rem == 0){
                ++ans;
            }
            
            num = num/10;
            
            
            
            
        
            
            
            
        }
        
        return ans;
    }
};


int main() {
    Solution s;
    int n = 33;
    cout << s.evenlyDivides(n) << endl;
    return 0;
}