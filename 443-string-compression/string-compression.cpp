class Solution {
public:
    int compress(vector<char>& chars) {
        string s;int count=1;
        if(chars.size()==0)return 0;
        for(int i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]){
                count++;
            }else{
                if(count==1){
                    s = s + chars[i];
                }else{s = s + chars[i] + to_string(count);}
                count = 1;
            }
        }
        s+=chars.back();
        if(count>1){
            s+=to_string(count);
        }
        int i;
        for(i=0;i<s.size();i++){
            chars[i]=s[i];
        }
        return i;
    }
};