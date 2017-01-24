#include "stdafx.h"
#include "Category.h"

Category::Category(string name) : Tree(name)
{

}

Category::~Category(void)
{
	Iter seek = children.begin();
	Iter end = children.end();

	for (; seek != end; ++seek)
	{
		delete(*seek);
	}
}

void Category::View()
{
	int size = GetSize();
	
	Iter seek = children.begin();
	Iter end = children.end();
	Tree *child = 0;

	for (; seek != end; ++seek)
	{
		child = (*seek);
		cout << child->GetName() << endl;
		
	}
}

void Category::AddChild(Tree *child)
{
	child->SetParent(this);
	children.insert(children.begin(), child);
}

void Category::RemoveChild(Tree *child)
{
	child->SetParent(0);

	Iter seek = std::find(children.begin(), children.end(), child);

	if (seek != children.end())
	{
		children.erase(seek);
	}
}