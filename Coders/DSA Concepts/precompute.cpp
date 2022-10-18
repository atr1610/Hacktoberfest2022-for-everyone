#include<iostream>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N]; 
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];//add sum for each element where 4th element will have sum of 1st,2nd,3rd and 4th element
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<endl;//sum of range from l to r so pf[r] will contain 1 to r and pf[l-1] will contain 1 to l so subtracting them will give sum from l to r elements
    }
    return 0;
}