#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k=0,q;
	cin>>n>>q;
	string a[n],m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=q;i++){
	int x,y,z;
	int k=0;
	cin>>x>>y>>z;
	if(x==1){
	for(int i=y-1;i<=z-1;i++)
	{
		m=a[i];
		if(m[0]==m[m.size()-1])
		k++;
	}
    cout<<k<<endl;
}
else if(x==2)
{
	string t=to_string(z);
	a[y]=t;
}
	
}
}
