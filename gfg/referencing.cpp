
#include <iostream>
#include<vector>
using namespace std;


int main () {

vector<int> arr = {12,35,1,10,34,1};
   
        int first = arr[0];
        int second = first;
        
        
        
        
        
        for (auto i : arr) {
            
            if (first < arr[i]) {
                second = first;
                first = arr[i];
                
            }
            if ( first > arr[i] &&  second < arr[i] ){
                second = arr[i] ;
                
                
            }
            
            
            
            
        
        }
        if (first == second ) {return -1;}
        
        return second  ;
        








}