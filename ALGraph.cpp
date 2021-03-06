#include"ALGraph.h"
int visited[] = { 0 };
template<class DataType>
//创界邻接表
ALGraph<DataType>::ALGraph(DataType v[],int n,int m)
{
	vertexnum = n;
	arcnum = m;
	//先将顶点表初始化一下
	for (int i = 0; i < vertex; i++)
	{
		adjlist[i].vertex = v[i];
		adjlist[i].next = nullptr;
	}
	//再开始连接
	for (int i < 0; i < arcnum; i++)
	{
		int vi, vj;
		cin >> vi >> vj;
		ArcNode<DataType>* s = new ArcNode<DataType>;
		s->adjvex = vj;
		s->next = adjlist[vi].firstEdge;
		adjlist[vi].firstEdge = s;
	}
}

//析构邻接表
template<class DataType>
ALGraph<DataType>::~ALGraph()
{
	for (int i = 0; i < vertexnum; i++)
	{
		ArcNode<DataType>* p = adjlist[i].firstEdge;
		while (p)
		{
			ArcNode<DataType>* tem = q->next;
			delete p;
			p = tem;
		}
	}
}
//深度优先遍历实现
template<class DataType>
void ALGraph<DataType>::DFSTraverse(int v)
{
	cout << adjlist[v].vertex << endl;
	visited[v] = 1;
	ArcNode<DataType>* tem = adjlist[v].firstEdge;
	while (tem)
	{
		if (visited[tem->adjvex] == 0)
		{
			DFSTraverse(tem->adjvex);
		}
		tem = tem->next;
	}
}
//广度优先遍历实现
template<class DataType>
void ALGraph<DataType>::BFSTraverse(int v)
{
	queue<int> s;
	cout << adjlist[v].vertex;
	visited[v] = 1;
	s.push(v);
	while (!s.empty())
	{
		int tem=s.front();
		ArcNode<DataType>* p = adjlist[v].firstEdge;
		while (p)
		{
			s.push(p->adjvex);
			if (visited[p->adjvex] == 0)
			{
				cout << adjlist[p->adjvex] << endl;
				visited[p->adjvex] = 1;
			}
			p = p->next;
		}
	}
}
