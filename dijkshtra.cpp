#include<bits/stdc++.h>
using namespace std;
class Graph{
	public:
	unordered_map<int,list<pair<int,int>>> m;
	void addEdge(int u,int v,int w)
	{
		m[u].push_back(make_pair(v,w));
		m[v].push_back(make_pair(u,w));
	}
	void print()
	{
		for(auto i:m)
		{
			cout<<i.first<<"-->";
			for(auto j: i.second)
			{
				cout<<"("<<j.first<<","<<j.second<<")";
			}
			cout<<endl;
		}
	}

	
	void dijkshtra(int data)
	{
		unordered_map<int,int> dist;
		for(auto j : m)
		dist[j.first]=INT_MAX;
		/*Now according to the algorithm we should have a set whcih is used to get maximum
		element and the first element of set is always sorted one of the most important
		concept is that when we insert element in the set we have to take care that in first
		parameter we will insert the distance */
		
		set<pair<int,int>> s;
		dist[data]=0;
		s.insert(make_pair(0,data));
		while(!s.empty())
		{
			auto p=*(s.begin());
			int node=p.second;
			int distance=p.first;
			s.erase(s.begin());
			
			for(auto childPair :m[node])
			{
				if(distance+childPair.second<dist[childPair.first]){
					int g=childPair.first;
				auto f=s.find(make_pair(dist[g],g));
				if(f!=s.end())
				{
					s.erase(f);
				}
				dist[childPair.first]=distance+childPair.second;
				s.insert(make_pair(dist[childPair.first],childPair.first));
			}
			
		}
	}
	
		/*Lets print distance*/
		for(auto i:dist)
		cout<<i.first<<"---->"<<i.second<<endl;
	
}
};

int main()
{
	Graph g;
	g.addEdge(1,2,1);
	g.addEdge(2,3,1);
	g.addEdge(1,3,4);
	g.addEdge(1,4,7);
	g.print();
	g.dijkshtra(1);
}
