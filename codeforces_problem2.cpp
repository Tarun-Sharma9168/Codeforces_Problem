#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    int h,m;
    while(t--)
    {
         int constant_num=(24*60);
         cin>>h>>m;
         cout<<( constant_num -  (h*60 + m))<<"\n";
    }
    return 0;
}