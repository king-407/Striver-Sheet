/*
    Problem Link: https://leetcode.com/problems/next-permutation/
*/

class Solution {
public:
    vector<int> nextPermutation(vector<int> &arr) {
    int i, n = arr.size();
    
    for(i = n - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1])
            break;
    }
    
    if(i < 0) {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    
    for(int j = n - 1; j > i; j--) {
        if(arr[j] > arr[i]) {
            swap(arr[i], arr[j]);
            break;
        }
    }
   
    reverse(arr.begin() + i + 1, arr.end());
    return arr;
}

};