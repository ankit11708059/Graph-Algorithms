#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
	int V;
	map<T,list<T>> l;
	public:
		Graph()
		{
		}
	void addEdge(T v,T u,bool bidr=true)
	{
		l[u].push_back(v);
		if(bidr==true){
			l[v].push_back(u);
		}
	}
	void print()
	{
		for(auto i :l)
		{
			cout<<i.first<<"--->";
			for(auto k :i.second)
			{
				cout<<k<<" ";
			}
			cout<<"\n";
		}
	}
};
int main()
{
	Graph<string> g;
	g.addEdge("Goku","Goten");
	g.addEdge("Goku","Gohan");
	g.addEdge("Goku","Chi-Chi");
	g.addEdge("Vegeta","Trunks");
	g.addEdge("Vegeta","Bulma");
	g.print();
}
