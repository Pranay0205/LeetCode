class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
      vector<int> ABnumbers {};
        int A, B;
        for(int i=0; i<n; i++){
            A = i;
            B = n- i;
            string SA = to_string(A);
            string SB = to_string(B);
            if(SA.find("0") == string::npos && SB.find("0") == string::npos){
                ABnumbers.push_back(A);
                ABnumbers.push_back(B);
                return ABnumbers;    
            }
           
        }
         return ABnumbers;
        
    }
};