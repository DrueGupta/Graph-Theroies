#pragma once
#include "Vertex.h"
#include <vector>
#include <unordered_map>
#include <iostream>
#include <queue>
using namespace std;

template <typename TYPE>
class Graph
{
public:
	vector<Vertex<TYPE>*> vertices;

	void addVertex(Vertex<TYPE>* vertex)
	{
		this->vertices.push_back(vertex);
	}
	void dfs(Vertex<TYPE>* current)
	{
		static unordered_map<Vertex<TYPE>*, bool> visited;
		visited[current] = true;
		cout << current->data << endl;
		for (Vertex<TYPE>* neigbor : current->connections)
		{
			if (visited[neigbor])
				continue;
			else
				dfs(neigbor);
		}
	}
	void bfs(Vertex<TYPE>* current)
	{
		unordered_map<TYPE*, bool> visited;
		queue<Vertex<TYPE>*> upNext;
		Vertex<TYPE>* now;
		visited[current->data] = true;
		upNext.push(current);
		while (!upNext.empty())
		{
			now = upNext.front();
			upNext.pop();
			cout << now->data << endl;
			for (Vertex<TYPE>* neighbor : now->connections)
			{
				if (!visited[neighbor->data])
				{
					upNext.push(neighbor);
					visited[neighbor->data] = true;
				}
			}
		}
	}
};
