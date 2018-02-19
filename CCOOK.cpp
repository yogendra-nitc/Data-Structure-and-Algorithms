                // Ygendra : steptostep93

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define OPTIMIZE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


signed main() {
    OPTIMIZE
	int n;
	cin>>n;
	int cnt=0;
	for(int i=0; i<n; i++)
	{
	    cnt=0;
	    for(int i=0; i<5; i++)
	    {
	        int x;
	        cin>>x;
	        if(x==1)
	        cnt++;
	    }
	        if(cnt==0)
	        cout<<"Beginner";
	        else if(cnt==1)
	        cout<<"Junior Developer";
	        else if(cnt==2)
	        cout<<"Middle Developer";
	        else if(cnt==3)
	        cout<<"Senior Developer";
	        else if(cnt==4)
	        cout<<"Hacker";
	        else if(cnt==5)
	        cout<<"Jeff Dean";
	        cout<<"\n";
	}
	
	return 0;
}

/*
Junior Developer
Jeff Dean
Senior Developer
Hacker
Hacker

*/
