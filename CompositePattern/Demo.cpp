#include "stdafx.h"
#include "common.h"
#include "Category.h"
#include "Path.h"

Tree *MakeDemoLocationTree();
Tree *MakeDemoDataTree();

void main()
{
	Tree *tree = new Category("사진트리");
	tree->AddChild(MakeDemoDataTree());
	tree->View();

	delete tree;
}

Tree *MakeDemoLocationTree()
{
	Tree *tree = new Category("지역");
	Tree *sub1 = new Category("제주");

	tree->AddChild(sub1);

	return tree;
}

Tree *MakeDemoDataTree()
{
	Tree *tree = new Category("날짜");
	Tree *sub1 = new Category("20170124");

	tree->AddChild(sub1);

	return tree;
}

