#pragma once
#include "nodeADT.h"
#include <iostream>
#include "macros.h"

#ifndef BNODE_H
#define BNODE_H

template<typename E>
class BNode : public BinNode<E> {
private:
	BNode<E>* Left;
	BNode<E>* Right;
	E* data;
public:
	BNode(const int d) {
		int param = d;
		data = new E[1];
		memcpy(data, &param, sizeof(int));
		Left = 0;
		Right = 0;
	}
	~BNode() {
		if (Left) {
			delete[] Left;
		}
		if (Right) {
			delete[] Right;
		}
		delete[] data;
	}

	void makePair() {
		Left = new BNode<E>(1);
		Right = new BNode<E>(1);
	}
	void visit() {
		sayl(this);
	}
	BNode<E> left() const {
		return Left;
	}
	BNode<E> right() const {
		return Right;
	}
	E getData() const {
		return data[0];
	}

	// in-order tree traversal
	void inorder(BNode<E>* root) {
		if (root == NULL) return; // Empty subtree, do nothing
		inorder(root->left()); // Access left node FIRST
		visit(root); // Perform desired action (Then access parent node)
		inorder(root->right()); // Finally access right node
	}


};

#endif