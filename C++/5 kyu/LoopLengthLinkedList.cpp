#include <set>

int loopLen(Node* node) {
	Node* start = node;
	int count = 1;
	while (node->getNext() != start) {
		node = node->getNext();
		count++;
	}
	return count;
}

int getLoopSize(Node* startNode)
{
	std::set<Node*> set;
	while (startNode) {
		if (set.find(startNode) != set.end())
			return loopLen(startNode);
		set.insert(startNode);
		startNode = startNode->getNext();
	}
	return -1;
}