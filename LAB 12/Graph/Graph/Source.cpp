#include <iostream>
#include <conio.h>
#include <list>
using namespace std;
int AdjMatrix[50][50];
void PrintAdjMatrix(int v)
{
	cout << "\n Adjacency Matrix for undirected Graph : " << endl;
	for (int i = 0; i < v; i++){
		for (int j = 0; j < v; j++){
			cout << AdjMatrix[i][j] << " ";
		}
		cout << endl;
	}
}
void Edge(int x, int y){
	AdjMatrix[x][y] = AdjMatrix[y][x] = 1;
}
class Graph
{
	int v, e;
	list<int>* l;
public:
	Graph(int v, int e)
	{
		this->v = v;
		this->e = e;
		l = new list<int>[v];
	}
	void AddEdge(int x, int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void PrintAdjList(int v)
	{
		cout << "\n Adjacency List for undirected Graph : " << endl;
		for (int i = 0; i < v; i++){
			cout << i;
			for (auto nbr : l[i]){
				cout << "-->" << nbr;
			}
			cout << endl;
		}
	}
};
void main()
{
	int v, e, x, y;
	cout << "\n Enter the number of vertices in Graph : ";
	cin >> v;
	cout << "\n Enter the number of edges in Graph : ";
	cin >> e;
	cout << endl;
	Graph g(v, e);
	for (int i = 0; i < e; i++)	{
		cout << "\n Enter edge number " << (i + 1) << " : ";
		cin >> x >> y;
      	Edge(x, y);
		g.AddEdge(x, y);
	}
	cout << endl;
	PrintAdjMatrix(v);
	cout << endl;
	g.PrintAdjList(v);
	cin.get();
}