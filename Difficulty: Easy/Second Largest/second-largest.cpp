//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        for(int i =n-2;i>=0; i--){
            if(arr[i]!=arr[n-1]){
                return arr[i];
            }
        }
        return -1;
    }
    int main(){
        vector<int> arr ={12,1,35,10,34,1};
    cout<<getSecondLargest(arr);
    
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends