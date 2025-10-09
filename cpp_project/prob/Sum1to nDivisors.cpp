#include <iostream>
using namespace std;


class Solution {
  public:

    int divs(int n){

    int ans = 0;

    for (int i = 1; i*i < n; i++) {
        if (n % i == 0) {
            ans += i;
        }
        if (n/i != i )
            ans += n/i;

    }
        return ans ;

    }


    int sumOfDivisors(int n) {

    int res = 0 ;
    for (int i= 1 ;i<=n;i++){
        res += divs(i);
    }

    return res;}
};


int main(){




    Solution s;
    cout<<s.sumOfDivisors(7)<<endl;



return 0 ; 
}