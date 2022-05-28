class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int c = 0;
        int i = a.size()-1;
        if(a.size() > b.size()){
            i = a.size()-1;
            while(b.size() != a.size()){
                b = "0" + b;
                }
        }
        if(a.size() < b.size()){
            i = b.size()-1;
            cout<<b.size() - a.size()<<endl;
            while(a.size() != b.size()){
                a = "0" + a;
                }
        }
        //cout<<a<<" "<<b<<endl;
        
        for(; i>=0; i--){ 
           if(a[i] == '0' && b[i] == '0' && c==0){
             ans = "0" + ans;   
            }
           else if(a[i] == '0' && b[i] == '0' && c==1){
                ans = "1" + ans;
                c = 0;
            }           
            else if((a[i] == '1' && b[i] == '0'  && c==0) || (a[i] == '0' && b[i] == '1' && c==0)){
                ans = "1" + ans;
            }

            else if((a[i] == '1' && b[i] == '1'  && c==0) || (a[i] == '1' && b[i] == '0'  && c==1) || (a[i] == '0' && b[i] == '1' && c==1)){
                ans = "0" + ans;
                c = 1;
            }
            else if(a[i] == '1' && b[i] == '1'  && c==1){
                ans = "1" + ans;
                c = 1;
            }
        }
        if(c == 1)
            ans = "1" + ans;
        return ans;
    }  
            
};