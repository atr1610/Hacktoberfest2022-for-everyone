#include<bits/stdc++.h>
using namespace std; 
void chk1(int a,int c1)
{
    c1 = 0;
    int i,j=1;
    for(i=2; i<a; i++)
    {
        if(a%i==0)
        {
            j=0;
            break;
        }
        c1++;
    }   
    if(j!=0)
        cout<<"The number is prime\n";
    else
        cout<<"The number is not prime\n";
    cout<<"Time : "<<c1<<endl;
}
void chk2(int a,int c2)
{
    c2 = 0;
    int i,j=1,k=a/2;
    for(i=2; i<=k; i++)
    {
        if(a%i==0)
        {
            j=0;
            break;
        }
        c2++;
    }   
    if(j!=0)
        cout<<"The number is prime\n";
    else
        cout<<"The number is not prime\n";
    cout<<"Time : "<<c2<<endl;
}  
void chk3(int a,int c3)
{
    c3 = 0;
    int i,j=1,k;
    k = sqrt(a);
    for(i=2; i<=k; i++)
    {
        if(a%i==0)
        {
            j=0;
            break;
        }
        c3++;
    }   
    if(j!=0)
        cout<<"The number is prime\n";
    else
        cout<<"The number is not prime\n";
    cout<<"Time : "<<c3<<endl;
}  
int main()
{
    int cnt1,cnt2,cnt3;
    int n;
    cout<<"Enter the number to be checked : ";
    cin>>n;
    cout<<"Algo 1 : \n";
    chk1(n,cnt1);
    cout<<"Algo 2 : \n";
    chk2(n,cnt2);
    cout<<"Algo 3 : \n";
    chk3(n,cnt3);
    return 0;
}