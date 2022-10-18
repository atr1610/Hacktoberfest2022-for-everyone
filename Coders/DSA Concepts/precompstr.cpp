#include<iostream>
using namespace std;    
const int N = 1e5+10;
int hsh[N][26];//create 2d array for 26 letters of the alphabet
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<N;++i)
        {
            for(int j=0;j<26;++j)
                hsh[i][j] = 0;
        }
        int n,q;//size of arr and no. of queries
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;++i)
        {
            hsh[i=1][s[i]-'a']++;
        }       
        for(int i=0;i<26;++i)
        {
            for(int j=1;j<=n;++j)
                hsh[j][i] += hsh[j-1][i];//an array corresponding each letter,hence loop of 26 first then an n based loop
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int oddCt = 0;
            for(int i=0;i<26;++i)
            {
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt%2!=0) 
                    oddCt++;
            }
            if(oddCt>1)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}