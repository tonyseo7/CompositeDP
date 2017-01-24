#include "stdafx.h"
#include "common.h"
#include "Category.h"
#include "Path.h"

Tree *MakeDemoLocationTree();
Tree *MakeDemoDataTree();

void main()
{
	Tree *tree = new Category("����Ʈ��");
	tree->AddChild(MakeDemoDataTree());
	tree->View();

	delete tree;
}

Tree *MakeDemoLocationTree()
{
	Tree *tree = new Category("����");
	Tree *sub1 = new Category("����");

	tree->AddChild(sub1);

	return tree;
}

Tree *MakeDemoDataTree()
{
	Tree *tree = new Category("��¥");
	Tree *sub1 = new Category("20170124");

	tree->AddChild(sub1);

	return tree;
}

