#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1{2,2,1,1,1,2,2};
    int n=v1.size();
    map <int,int> mp;
    int i=0,j=0,maxelement=0,maxfrequency=0,frequency=1,x=n/2;
    for(i=0;i<n;i++)
    {
        if(mp.find(v1[i])==mp.end())
        {
            mp.insert(pair<int,int>(v1[i],frequency));
            if(maxfrequency<mp[v1[i]])
            {
                maxelement=v1[i];
                maxfrequency=mp[v1[i]];
            }
        }
        else
        {
            mp[v1[i]]++;

            if(maxfrequency<mp[v1[i]])
            {
                maxelement=v1[i];
                maxfrequency=mp[v1[i]];
            }
        }
        frequency=1;

    }
    cout<<maxelement<<" "<<maxfrequency;
    return 0;
}
