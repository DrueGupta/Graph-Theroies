#pragma once
#include <vector>
using namespace std;

template <typename TYPE>
class Vertex
{
public:
	TYPE data;
	vector<Vertex*> connections;

	Vertex(TYPE value)
	{
		this->data = value;
	}
	void addConnection(Vertex* other)
	{
		this->connections.push_back(other);
		other->connections.push_back(this);
	}
};
