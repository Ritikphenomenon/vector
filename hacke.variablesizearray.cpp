#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
int size;
int queri;
cin>>size>>queri;
vector<vector<int> >out;
     for(int i=0;i<size;i++)
     {
         vector<int>in;
         int sizein;
         cin>>sizein;
         for(int j=0;j<sizein;j++)
         {
             int temp;
             cin>>temp;
             in.push_back(temp);
         }
         out.push_back(in);
     }
     for(int i=0;i<queri;i++)
     {
         int a,b;
         cin>>a>>b;
         cout<<out[a][b]<<endl;
     }
    return 0;
}

