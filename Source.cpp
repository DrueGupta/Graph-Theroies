#include <iostream>
#include <string>
#include "Graph.h"
#include "Vertex.h"
using namespace std;

int main()
{
	Graph<string> shows;
	Vertex<string> a("Tokyo Ghoul");
	Vertex<string> b("Monogatari");
	Vertex<string> c("Fire Force");
	Vertex<string> d("MHA");
	Vertex<string> e("Blue Archive the Animation");
	Vertex<string> f("Persona 4 the Animation");
	Vertex<string> g("Persona 5 the Animation");
	Vertex<string> h("Cyberpunk Edgerunners");

	e.addConnection(&f);
	e.addConnection(&g);
	e.addConnection(&h);
	a.addConnection(&b);
	a.addConnection(&c);
	a.addConnection(&d);
	shows.bfs(&d);
}
