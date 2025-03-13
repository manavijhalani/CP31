/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//1 2 3 4 5 6
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,q;
        cin>>n>>k>>q;
        int m;
        long long len=0;
        long long ans=0;
        for(int j=0;j<n;j++)
        {
            cin>>m;
            if(m<=q)
            {
                len++;
            }
            else
            {
                if(len>=k)
                {
                    long long diff=len-k+1;
                    ans=ans+((diff)*(diff+1))/2;
                }
                len=0;
            }
        }
        if(len>=k)
        {
             long long diff=len-k+1;
           ans=ans+((diff)*(diff+1))/2;
            
        }
       
        cout<<ans<<endl;
    }

    return 0;
}