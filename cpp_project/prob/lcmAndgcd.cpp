#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:

    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }

    vector<int> lcmAndGcd(int a, int b) {
    
        //Declaration 
        vector<int> res ;   
        long long prd = a*b;
        
        res.push_back(prd/gcd(a,b));
        res.push_back(gcd(a,b));

        return res;  
    }
};


int main(){
        int a,b;
        a = 15 ,b =20;
        Solution s;
        vector<int> res = s.lcmAndGcd(a,b);
        cout<<res[0]<<" "<<res[1]<<endl;


    return 0 ;
}
