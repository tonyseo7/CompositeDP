#include "stdafx.h"
#include "Tree.h"

Tree::Tree(string name) :name(name) { parent = 0; }

int Tree::GetLevel()const
{
	int level = 0;
	Tree *ancestor = this->parent;

	while (ancestor)
	{
		level++;
		ancestor = ancestor->GetParent();
	}

	return level;
}

Tree *Tree::GetParent()const { return parent; }
void Tree::SetParent(Tree *_parent) { parent = _parent; }
string Tree::GetName()const { return name; }
void Tree::AddChild(Tree *child) {}
void Tree::RemoveChild(Tree *child) {}
int Tree::GetSize()const
{
	return name.size() + GetLevel() * 2;
}