                // Ygendra : steptostep93
                
 // Problem Link : https://www.codechef.com/COOK91/problems/CTHREE

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define OPTIMIZE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


signed main() {
    OPTIMIZE
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a,b,c;
	    cin>>a>>b>>c;
	    int maxv;
	    if(a>=b && a>c)
	        maxv = a;
	    else if(b>=a && b>c)
	        maxv = b;
	    else
	        maxv = c;
	    if(maxv>n)
	        maxv = n;
	    vector<int>vect1;
	    vector<int>vect2;
	    vector<int>vect3;
	    
	    for(int i=1; i<=maxv; i++)
	    {
	        if(n%i==0)
	        {
	            if(i<=a)
	            {
	                vect1.push_back(i);
	            }
	            if(i<=b)
	            {
	                vect2.push_back(i);
	            }
	            if(i<=c)
	            {
	                vect3.push_back(i);
	            }
	        }
	    }
        int hash[1000000]={0};
        for(int i=0; i<vect3.size(); i++)
        {
            hash[vect3[i]] = 1;
        }
	    int cnt=0;
	    for(int i=0; i<vect1.size(); i++)
	    {
	        for(int j=0; j<vect2.size(); j++)
	        {
	            int product = vect1[i]*vect2[j];
                if(n%product==0)
                {
                    int res = n/product;
                    if(res<=c)
                    {
                        if(hash[res]==1)
                        cnt++;
                    }
                }   
	        }
	    }
	    cout<<cnt<<"\n";
	}
	return 0;
}
