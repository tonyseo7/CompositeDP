#pragma once
#include "common.h"

class Tree
{
	Tree *parent;
	const string name;

public:
	Tree(string name);
	virtual void View() = 0;
	int GetLevel()const;
	Tree *GetParent()const;
	void SetParent(Tree *_parent);
	string GetName()const;
	virtual void AddChild(Tree *child);
	virtual void RemoveChild(Tree *child);

protected:
	int GetSize()const;
};