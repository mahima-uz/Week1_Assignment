#include<algorithm>
class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it.
    
//4 12 13 15 67
     int immediateSmaller(int arr[], int n, int x)
    { 
    int maximum=-999;
    
        for(int i=0;i<n;i++){
            
            if(arr[i]<x){
            maximum=max(maximum,arr[i]);
            }
        }    
    return maximum;
    }
};