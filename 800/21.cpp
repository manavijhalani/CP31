/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n;
       cin>>n;
       int len=0,k;
       int maxlen=0;
       for(int i=0;i<n;i++)
       {
           cin>>k;
           if(k==0)
           {
               len++;
           }
           else
           {
               maxlen=max(maxlen,len);
               len=0;
           }
       }
       maxlen=max(maxlen,len);
       cout<<maxlen<<endl;
   }
    return 0;
}