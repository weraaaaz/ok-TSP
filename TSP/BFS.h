#pragma once
#include "Vertex.h"
#include <unordered_set>
#include <vector>

class BFS
{
public:
	static long long bfs(Vertex *vStart, std::unordered_set<Vertex*> &vertsLeft, std::vector<Vertex*> &path);
};

