class Solution {
public:
 
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
    
    sort(t.begin(),t.end());
    
    
    for(int i=0;i<s.length();i++)
    {
      if(s[i]!=t[i])
      {
        return t[i];
      }
    }
    
    return t[t.length()-1];
    }
int main() 
{ 
 string s="abcd",t="abcde";
 char ans=findTheDifference(s,t);
 cout<<ans<<endl;
 return 0;
}
};
