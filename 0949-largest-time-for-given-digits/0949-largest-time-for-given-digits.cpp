class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
     string time="";   
     sort(arr.begin(),arr.end(), greater<int>());

    do {if((arr[0] < 2 || (arr[0] == 2 && arr[1] < 4)) && arr[2] < 6)
        {
            time = to_string(arr[0]) + to_string(arr[1]) + ":" + to_string(arr[2]) + to_string(arr[3]);
            return time;
        }
       }
       while(prev_permutation(arr.begin(), arr.end()));
        
        return "";  
     }   
     
};