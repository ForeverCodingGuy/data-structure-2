#include<iostream>
#include<queue>
using namespace std;
#define MAX_VERTEX 10
//边表
template<class DataType>
class ArcNode
{
public:
	int adjvex;
	ArcNode* next;
};
//顶点表
template<class DataType>
class VertexNode
{
	DataType vertex;
	ArcNode* firstEdge;
};
//有向图邻接表
template<class DataType>
class ALGraph
{
private:
	VertexNode<DataType> adjlist[MAX_VERTEX];
	int vertexnum, arcnum;
public:
	ALGraph(DataType v[],int n,int m);
	~ALGraph();
	void DFSTraverse(int v);//深度优先遍历
	void BFSTraverse(int v);//广度优先遍历
};
int main()
{

}
