#include<bits/stdc++.h>
using namespace std;
/* Concept is really simple have have made a list of linked list */
class Graph{
	int V;
	list<int> *l;
	public:
		Graph(int v)
		{
			V=v;
			l=new list<int>[V];
		}
	void addEdge(int v,int u,bool bidr=true)
	{
		l[u].push_back(v);
		if(bidr==true){
			l[v].push_back(u);
		}
	}
	void print()
	{
		for(int i=0;i<V;i++)
		{
			cout<<i<<"--->";
			for(auto k :l[i])
			{
				cout<<k<<" ";
			}
			cout<<"\n";
		}
	}
};
int main()
{
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(4,3);
	g.addEdge(1,4);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.print();
}
