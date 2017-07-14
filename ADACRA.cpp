#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int n=str.length();
	    int cnt=1;
	    for(int i=1; i<n; i++)
	    {
	        if(str[i-1] != str[i])
	        cnt++;
	    }
	    cout<<cnt/2<<endl;
	}
	return 0;
}
