#pragma once
#include "Tree.h"
typedef vector<Tree *>Children;
typedef vector<Tree *>::iterator Iter;

class Category : public Tree
{
	Children children;

public:
	Category(string name);
	~Category(void);
	virtual void View();
	virtual void AddChild(Tree *child);
	virtual void RemoveChild(Tree *child);
};