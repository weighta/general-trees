#include <iostream>
#include "BList.h"
#include "macros.h"
#include "BNode.h"

const int DEF_LIST_SIZE = 12;

struct NodeData {
	int ID;
};

int main() {
	BNode<NodeData> myNode(5);


	BList<int> L1(DEF_LIST_SIZE);
	L1.append(10);
	L1.append(20);
	L1.append(15);

	BList<int> L2(DEF_LIST_SIZE);
	L2.append(10);
	L2.append(20);
	L2.append(15);
	L2.moveToStart();
	L2.insert(39);
	L2.next();
	L2.insert(12);

	int cursPos = L2.currPos();
	int PAUSE = 0x0;

	return 0;
}