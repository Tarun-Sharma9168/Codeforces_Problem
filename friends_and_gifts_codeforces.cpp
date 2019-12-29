#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

   int t;
   cin>>t;
   int n;
   while(t--)
   {
        cin>>n;
        vector<int> f(n);
        vector<int> in(n),out(n);


        //input 
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
            --f[i];
            if(f[i]!=-1)
            {
                ++out[i];
                ++in[f[i]];
            }
        }
       /* for(int i=0;i<n;i++)
        {
            cout<<f[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<in[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<"\n";
        */
        vector<int> loop;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0 && out[i]==0)
            {
                loop.push_back(i);
            }
        }
        /*for(int i=0;i<loop.size();i++)
        {
            cout<<loop[i]<<" ";
        }
        */
        cout<<"\n";
        if(loop.size()==1)
        {
            int idx=loop[0];
            for(int i=0;i<n;i++)
            {
                if(in[i]==0 && i!=idx)
                {
                f[idx]=i;
                ++out[idx];
                ++in[i];
                break;
                }
            } 
        }
        else if(loop.size() > 1)
        {
               for(int i=0;i<int(loop.size());i++)
               {
                   int cur=loop[i];
                   int nxt=loop[(i+1)%int(loop.size())];
                   f[cur]=nxt;
                   ++out[cur];
                   ++in[nxt];
               }
        }
        loop.clear();
        vector<int> ins,outs;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0){ins.push_back(i);
            //cout<<"ins"<<i<<" ";
            }
            if(out[i]==0){outs.push_back(i);
            //cout<<"outs"<<i<<" ";
            }
        }
    assert(ins.size() == outs.size());//it checks and if it is true does nothing otherwise terminate the program
	for (int i = 0; i < int(outs.size()); ++i) {
		f[outs[i]] = ins[i];
	}
	
	for (int i = 0; i < n; ++i) {
		cout << f[i] + 1 << " ";
	}
	cout << endl;
   }
    return 0;
}