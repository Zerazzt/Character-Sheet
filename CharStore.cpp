#include "pch.h"
#include "CharStore.h"

CharStore::Node::Node()
{
	left = nullptr;
	right = nullptr;
	name = "";
}

CharStore::Node::Node(Node* l, Node* r, std::string n)
{
	left = l;
	right = r;
	name = n;
}

CharStore::Node::~Node()
{
	delete left;
	delete right;
}

CharStore::Node* CharStore::createTreeFromVector(std::vector<std::string>& v, int start, int end)
{
	if (start > end)
	{
		return nullptr;
	}
	int mid = (start + end) / 2;
	return new Node(
		createTreeFromVector(v, start, mid - 1),
		createTreeFromVector(v, mid + 1, end),
		v[mid]
	);
}

CharStore::CharStore()
{
	tree = nullptr;
}

CharStore::CharStore(std::vector<std::string>& v)
{
	if (v.empty())
	{
		tree = nullptr;
		return;
	}
	tree = createTreeFromVector(v, 0, v.size() - 1);
}

CharStore::~CharStore()
{
	delete tree;
}

void CharStore::insert(std::string n)
{
	if (!tree)
	{
		tree = new Node(nullptr, nullptr, n);
		return;
	}
	Node* prev = nullptr;
	Node* curr = tree;
	while (curr)
	{
		if (n == curr->name)
		{
			return;
		}
		prev = curr;
		if (n < curr->name)
		{
			curr = curr->left;
		}
		else
		{
			curr = curr->right;
		}
	}
	if (n < prev->name)
	{
		prev->left = new Node(nullptr, nullptr, n);
	}
	else
	{
		prev->right = new Node(nullptr, nullptr, n);
	}
}

void CharStore::remove(std::string n)
{
	if (!tree)
	{
		return;
	}
	Node* target = tree;
	Node* targetParent = nullptr;
	while (target && target->name != n)
	{
		targetParent = target;
		target = n < target->name ? target->left : target->right;
	}
	if (!target)
	{
		return;
	}
	if (!(target->left && target->right))
	{
		Node* child = target->left ? target->left : target->right;
		if (targetParent)
		{
			if (target == targetParent->left)
			{
				targetParent->left = child;
			}
			else
			{
				targetParent->right = child;
			}
		}
		else
		{
			tree = child;
		}
	}
	else
	{
		Node* successor = target->right;
		Node* successorParent = nullptr;
		while (successor->left)
		{
			successorParent = successor;
			successor = successor->left;
		}
		if (targetParent)
		{
			successor->left = target->left;
			target->left = nullptr;
			if (successorParent)
			{
				successorParent->left = successor->right;
				successor->right = target->right;
			}
			target->right = nullptr;
			if (target == targetParent->left)
			{
				targetParent->left = successor;
			}
			else
			{
				targetParent->right = successor;
			}
		}
		else
		{
			successor->left = target->left;
			target->left = nullptr;
			if (successorParent)
			{
				successorParent->left = successor->right;
				successor->right = target->right;
			}
			target->right = nullptr;
			tree = successor;
		}
	}
	delete target;
}

std::ostream& operator << (std::ostream& out, const CharStore& c)
{
	if (c.tree)
	{
		out << *c.tree;
	}
	return out;
}

std::ostream& operator << (std::ostream& out, const CharStore::Node& n)
{
	if (n.left)
	{
		out << *n.left << "\n";
	}
	out << n.name;
	if (n.right)
	{
		out << "\n" << *n.right;
	}
	return out;
}