#pragma once

#ifndef NODEADT_H
#define NODEADT_H

template <typename E>
class BinNode {
public:
	BinNode() {}
	virtual ~BinNode() {}
	virtual void visit() = 0;
	virtual E getData() const = 0;
};

#endif