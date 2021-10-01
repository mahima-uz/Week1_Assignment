
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        vector <int> output;
        for(int i=0;i<n;i++){
            int j;
            for( j=i+1;j<n;j++){
               if (arr[i] <arr[j]){
                break;
            }
            }
        if (j == n){
            output.push_back(arr[i]);
            }
        }
  return output;
}